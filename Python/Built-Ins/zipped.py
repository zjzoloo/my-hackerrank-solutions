n,m = map(int, input().split())
X = []
for _ in range(m):
    X.append(map(float, input().split()))
for i in zip(*X):
    print(sum(i)/len(i))
