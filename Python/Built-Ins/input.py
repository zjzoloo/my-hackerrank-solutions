a,b = map(int, input().split())
print(b == eval("{}".format(input().replace("x", str(a)))))
