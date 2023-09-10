#!/bin/bash
i=0
while [ $i -le 5 ]; do
 echo $RANDOM
 i=$((i+1))
done
