class Student:
    def __init__(self, name, age, gender, address, phone):
        self.name = name
        self.age = age
        self.gender = gender
        self.address = address
        self.phone = phone

    def eat(self):
        print(f"{self.name}在吃饭。")

    def study(self):
        print(f"{self.name}在学习。")

    def play(self):
        print(f"{self.name}在玩。")


def search(mode, item, lst):
    if mode == 'name':
        for i in range(len(lst)):
            if lst[i].name == item:
                return lst[i]
    elif mode == 'address':
        for i in range(len(lst)):
            if lst[i].address == item:
                return lst[i]
    elif mode == 'phone':
        for i in range(len(lst)):
            if lst[i].phone == item:
                return lst[i]
    return False


st1 = Student("小明", 18, "男", "一舍西101", "1234567890")
st2 = Student("小红", 20, "女", "五舍202", "9876543210")
lst = [st1, st2]

res = search('name', '小明', lst)
print(f"姓名：{res.name}, 年龄：{res.age}, 性别：{res.gender}, 地址：{res.address}, 电话：{res.phone}")
