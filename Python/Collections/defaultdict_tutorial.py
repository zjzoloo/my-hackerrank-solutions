from collections import defaultdict
d = defaultdict(list)
lst=[]

n, m = map(int,input().split())

for i in range(n):
    d[input()].append(i+1) 

for i in range(m):
    lst+=[input()]  

for i in lst: 
    if i in d:
        print(" ".join( map(str,d[i])))
    else:
        print("-1")
