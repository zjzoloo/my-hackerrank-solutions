#!/bin/python3

import re

lst=[]
for a0 in range(int(input())):
    firstName, emailID = [str(s) for s in input().split()]
    if re.search('@gmail\.com$', emailID):
           lst.append(firstName)
print(*sorted(lst), sep='\n')
