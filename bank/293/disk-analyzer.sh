#!/bin/bash

readarray -t -s1 arr <<< $(df -h / --output=avail,used,target,size,pcent)
read avail used mount size pcent <<< ${arr[0]}

echo "Free/Total memory: $avail / $size" 
echo "Percentage: ${pcent//%}"

# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/147642/