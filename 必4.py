def search(lis, item):
    if item in lis:
        return True
    else:
        return False


n = int(input("请输入列表元素个数："))
a = []
for i in range(n):
    a.append(int(input("请输入第%d个数字：" % (i+1))))
item = int(input('请输入要查找的数：'))
if search(a, item):
    print('该数在列表中')
else:
    print('该数不在列表中')
