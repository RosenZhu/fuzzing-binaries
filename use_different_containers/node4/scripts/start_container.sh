#/bin/bash

echo $1

echo "fwq2018" |sudo -S docker run -i --rm --cpuset-cpus="4" --privileged -v /home/hp5_xgz/afl_fuzzing_experiment/node4:/fuzzing --name "$1" -h "$1" vvendetta/aflfast /bin/bash fuzzing/scripts/start_afl.sh $1


