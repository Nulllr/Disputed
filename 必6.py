for i in range(100, 1000):
    hun = int(i / 100)
    dig = i % 10
    ten = int(i / 10) % 10
    if hun**3+dig**3+ten**3 == i:
        print(i)
