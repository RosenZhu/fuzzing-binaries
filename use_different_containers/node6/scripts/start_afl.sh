#/bin/bash

rm -rf fuzzing/records/"$1"_out

afl/afl-fuzz -i fuzzing/input -o fuzzing/records/"$1"_out -m 1G -Q fuzzing/binary/$1
