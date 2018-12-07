# fuzzing-binaries
some binaries for fuzzing test.

the .txt files are the parameters for corresponding C file

AFL_NO_FORKSRV=1 ./afl-fuzz -i input -o output /path/to/binary
