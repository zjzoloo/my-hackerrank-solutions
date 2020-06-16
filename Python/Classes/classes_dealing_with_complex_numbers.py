import math

def str(a):
    return '{0:04.2f}{1:+04.2f}i'.format(a.real, a.imag+0)
class Complex(complex):
    def mod(self):
        return abs(self)

if __name__ == '__main__':
    c = map(float, input().split())
    d = map(float, input().split())
    x = Complex(*c)
    y = Complex(*d)
    print(*map(str, [x+y, x-y, x*y, x/y, x.mod(), y.mod()]), sep='\n')
