import itertools
lst1 = list(map(int, input().split()))
lst2 = list(map(int, input().split()))

print(*itertools.product(lst1, lst2))
