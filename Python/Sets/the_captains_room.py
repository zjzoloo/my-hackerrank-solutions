k,lst = int(input()),list(map(int, input().split()))
s = set(lst)
print(((sum(s)*k)-(sum(lst)))//(k-1))
