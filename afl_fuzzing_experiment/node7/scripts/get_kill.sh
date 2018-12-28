#!/bin/bash


ID=`ps -ef | grep "$$1" | grep -v "grep" | awk '{print $2}'`

echo "--------------------------"

echo 'found ID list:' $ID

for id in $ID
do
	kill -9 $id
	echo "killed $id"
done

echo "--------------------------"
