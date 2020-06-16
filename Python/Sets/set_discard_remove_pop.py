n = int(input())
s = set(map(int, input().split()))
for i in range(int(input())):
    eval('s.{}({})'.format(*input().split()+['']))

print(sum(s))
