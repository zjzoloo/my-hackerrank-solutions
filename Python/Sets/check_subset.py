n = int(input())
for _ in range(n):
    input()
    s1 = set(map(int, input().split()))
    input()
    s2 = set(map(int, input().split()))
    print(s1.issubset(s2))
