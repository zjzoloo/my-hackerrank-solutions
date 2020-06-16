import math

def isPrime(n):
    if (n==1): 
        return False
    if (n==2): 
        return True
    if ((n & 0x1) == 0x0):
        return False

    root = math.sqrt(n)
    
    for i in range(3, int(root+1), 2):
        if n%i == 0:
            return False

    return True

n = int(input())
for i in range(n):
    num = int(input())
    if isPrime(num) == True:
        print('Prime')
    else:
        print("Not prime")
