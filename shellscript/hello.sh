#!/bin/bash
readonly greeting="Hello"
current_time=`date +%X`
echo "hi, i am $(whoiam)"
read -e -p "Who are you" myName
echo "${greeting:-Hi},$myName. now the time is $current_time"
