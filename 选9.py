def facsum(n):
    sum = 0
    fac = lambda n: 1 if n == 0 else n * fac(n - 1)
    for i in range(n):
        sum += fac(i + 1)
    return sum


n = int(input('n='))
print(facsum(n))
