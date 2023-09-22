def rep(lst):
    return list(set(lst))


n = int(input("请输入列表长度："))
lst = []
for i in range(n):
    lst.append(int(input("请输入第%d个数字：" % (i+1))))
print('去重之后的列表：', rep(lst))
