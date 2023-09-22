def selection_sort(num):
    for i in range(len(num)):
        minidx = i
        for j in range(i+1, len(num)):
            if num[j] < num[minidx]:
                minidx = j
        num[i], num[minidx] = num[minidx], num[i]
    return num


n = int(input("请输入要排序的数字个数："))
num = []
for i in range(n):
    num.append(int(input("请输入第%d个数字：" % (i+1))))

print("从小到大排序后的结果为：", selection_sort(num))
