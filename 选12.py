def is_leap(year):
    leap = 0
    if year % 4 == 0:
        leap += 1
        if year % 100 == 0:
            leap -= 1
            if year % 400 == 0: leap += 1
    return bool(leap)


year = int(input('要查询的年份：'))
if is_leap(year):
    print('这一年是闰年')
else:
    print('这一年不是闰年')
