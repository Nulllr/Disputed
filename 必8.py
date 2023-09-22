def S(n):
    sum = 0
    for i in range(n):
        sum += (2*i+1)/(2*i+3)
    return sum


n = int(input('n='))
print(S(n))
