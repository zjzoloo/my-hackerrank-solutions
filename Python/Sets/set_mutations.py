input()
s = set(map(int, input().split()))
n = int(input())
for _ in range(n):
    command = input().split()
    ss = set(map(int, input().split()))
    eval('s.{}({})'.format(command[0], ss))
print(sum(s))
