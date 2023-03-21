#!/bin/bash

stat /root/flag.txt
value = `cat /root/flag.txt`
flag = "ITA{buff3r_15_h4ck3d}"
if [ $value -eq $flag ] 
then
    echo "Correct flag"
else
    echo "Wrong flag"
fi
