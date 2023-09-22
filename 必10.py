from math import sqrt, ceil


def prime(p):
    if p == 1 | p <= 0:
        return False
    elif p == 2:
        return True
    elif p % 2 == 0 | p % 3 == 0:
        return False
    else:
        for i in range(3, ceil(sqrt(p)) + 2)[::2]:
            if p % i == 0: return False
    return True

p = int(input('p='))
if prime(p):
    print('这个数是素数')
else:
    print('这个数不是素数')
