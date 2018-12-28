#!/bin/bash

path=$(pwd) 

for i in $(seq 1 10)
do 
	cd "$path"/node"$i"/scripts
	python auto_compiling.py
	
	sleep 5
done
