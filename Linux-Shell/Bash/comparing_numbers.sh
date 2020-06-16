#!/bin/bash
read X
read Y
[[ $X -gt $Y ]] && echo "X is greater than Y"
[[ $X -eq $Y ]] && echo "X is equal to Y"
[[ $X -lt $Y ]] && echo "X is less than Y"
exit 0
