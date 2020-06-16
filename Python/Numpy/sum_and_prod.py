import numpy

n,m = map(int, input().split())
ans = numpy.array([input().split() for _ in range(n)],int)
print(numpy.prod(numpy.sum(ans, axis=0), axis=0))
