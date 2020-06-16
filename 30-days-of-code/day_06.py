n = int(input())
for i in range(n):
    s = input()
    even, odd = "", ""
    for i in range(len(s)):
        if i%2==0:
            even += s[i]
        else:
            odd += s[i]
    print("{} {}".format(even, odd))

