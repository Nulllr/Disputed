sum = 0
for i in range(100):
    sum += (2*(i % 2 != 0)-1) * i ** 2
print(sum)
