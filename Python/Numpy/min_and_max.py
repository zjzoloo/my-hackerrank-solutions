import numpy as np
n,m = map(int, input().split())
ans = np.array([input().split() for _ in range(m)],int)
print(np.max(np.min(ans, axis=1)))
