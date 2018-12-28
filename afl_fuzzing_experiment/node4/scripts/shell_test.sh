#/bin/bash

paswd="fwq2018"

crash_flag=0  # flag for checking crash
run_time=0  # record the running time
interval=300   # sleep time

inputfiles=$(ls /home/hp5_xgz/afl_fuzzing_experiment/node4/binary) # get all the test cases

for inputname in $inputfiles
do
	echo "==================================="
	echo "input name : $inputname" 
	nohup bash ./start_container.sh $inputname >> /home/hp5_xgz/afl_fuzzing_experiment/node4/log/"$inputname".log 2>&1  &	

	while [ $run_time -lt 86400 ]
	do 
		sleep $interval
		let 'run_time=run_time+interval'
		echo -ne "runtime :$run_time\\r"

		for crash_file in $(echo $paswd |sudo -S docker exec -i $inputname ls fuzzing/records/"$inputname"_out/crashes)
		do
			if [ "${crash_file##*.}"x != "txt"x ]
			then 
				echo "crash found"
				let "crash_flag=1"
				break
				#ret=$(echo $paswd |sudo -S docker exec -i $inputname python ./fuzzing/scripts/Verify_Fuzzing_Input.py -i ./fuzzing/records/"$inputname"_out/crashes/$crash_file -t /fuzzing/track/"$inputname".txt)
				#echo $ret
				#if [ $ret = "True" ]
				#then
				#	echo "crash found"
				#	let "crash_flag=1"
				#	break
				#fi
			fi
		done
		
		if [ $crash_flag -eq 1 ]
		then
			break
		fi
		
	done
	#echo $paswd | sudo -S docker exec -i $inputname /bin/bash exit
	#echo $paswd | sudo -S docker exec -i $inputname cd fuzzing/scripts | bash ./get_kill.sh
	#echo $paswd | sudo -S bash ./get_kill.sh
	
	echo $paswd | sudo -S docker exec -i $inputname chmod -R 777 ./fuzzing/records/"$inputname"_out 

	echo $paswd | sudo -S bash ./get_kill.sh $inputname

	echo "run_time : $run_time"
	echo "==================================="
	let "run_time=0"
	let "crash_flag=0"

done


