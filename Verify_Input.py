import os
import sys
import getopt
import re

def charcmp(c1,c2):
    
    if isinstance(c1,str):
        c1 = ord(c1)
    if isinstance(c2,str):
        c2 = ord(c2)

    if c1<c2:
        return 1
    else:
        if c1 == c2:
            return 0
        else:
            return -1

def pick_string(string,length):
    pos = 0
    subStr = []
    while pos < len(string) and pos < length:
        if string[pos] == 12:
            del string[0:pos]
            return subStr,string
        subStr.append(string[pos])
        pos+=1
        
    return subStr,string[pos:]
        
        
def verify(string,track,opt):
    pos = 0
    
    while pos < len(string):
        res = charcmp(string[pos],track[pos])
        
        if res == 0:   # string == track
            pos +=1
            
        elif res == 1:  # string < track
            if opt == "<":
                pos+=1
            else:
                return False
            
        elif res == -1:  # string > track
            if opt == ">":
                pos+=1
            else:
                return False
            
    if pos < len(track):
        if opt != "<":
            return False
        
    return True

        
def verify_input(track,string):
    cur_pos = 0
    track_length = sum([track[x][1] for x in range(0,len(track))])
    cur_string = string
    
    for i in range(0,len(track)):
        if len(string) == 0:
            return "False 1 : length of string is not enough"
        
        cur_track = track[i][0]
        subStr,string = pick_string(string,track[i][1])
        
        print("=========")
        print("subStr : ")
        print(subStr)
        print("track : ")
        print(cur_track)
        
        res = verify(subStr,cur_track,track[i][2])
        if not res:
            return "False 2 : verify"
        
    return "True"
    
    
        

def main(argv):
    try:
        opts, args = getopt.getopt(argv,"hi:t:",["ifile=","tfile="])
    except getopt.GetoptError:
        print("Verify_Fuzzing_Input.py -i <input_path> -t <track_path>")
        sys.exit(2)

    for opt, arg in opts:
        if opt == "-h":
            print("Verify_Fuzzing_Input.py -i <input_path> -t <track_path>")
            sys.exit()
        elif opt in ("-i","--ifile"):
            input_path = arg
        elif opt in ("-t","--tfile"):
            track_path = arg
            
    print(input_path)
    print(track_path)
    
    # read the input_path file
    
    string = ""
    with open(input_path,'rb') as f:
        string = f.read()
        for i in range(0,len(string)):
            print(string[i])
            
    # read the track_path file
    with open(track_path,'r') as f:
        content = f.readlines()
        
    track = []
    p_condition = r'".+"'
    p_opt = r").+)"
    
    for line in content:
        if "controller4vul" in line:
            #print(line)
            pattern = re.compile(p_condition)
            condition = pattern.findall(line)[0].strip('"')
            #print(condition)
            length = len(condition)
            
            comp = line[-5]
            
            track.append([condition,length,comp])
            
        if "Vulnerability" in line:
            break
    
    #print(track)
    
    print(verify_input(track,string))

if __name__=="__main__":
    main(sys.argv[1:])

