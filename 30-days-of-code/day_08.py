# Enter your code here. Read input from STDIN. Print output to STDOUT
n = input()
dictionary = {}
for _ in range(int(n)):
    key, val = list(map(str, input().split()))
    dictionary[key] = val

try:
    while True:
        q = input()
        if q in dictionary:
            print("{}={}".format(q,dictionary[q]))
        else:
            print("Not found")
except:
    pass

