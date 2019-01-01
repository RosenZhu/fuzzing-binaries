#!/bin/bash

sudo docker rm test

sudo docker run -it --privileged -v /home/hp5_xgz/afl_fuzzing_experiment:/fuzzing --name "test" -h "test" vvendetta/aflfast /bin/bash 
