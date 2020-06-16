import numpy

n,m,p = map(int, input().split())
arrA = numpy.array([input().split() for _ in range(n)],int)
arrB = numpy.array([input().split() for _ in range(m)],int)
print(numpy.concatenate((arrA, arrB), axis = 0))
