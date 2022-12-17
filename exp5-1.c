#include<stdio.h>

int day_of_year(int year, int month, int day);

int main(void) {
	int a, b, c;
	fputs("请输入您要查询的年月日：", stdout);
	scanf("%d%d%d", &a, &b, &c);
	printf("%d年%d月%d日是这一年的第%d天。\n", a, b, c, day_of_year(a, b, c));
}

int day_of_year(int year, int month, int day) {
	int leap = year % 4 == 0 && (year % 400 == 0 || year % 100 != 0);

	switch (month) {
	case 12: day += 30;
	case 11: day += 31;
	case 10: day += 30;
	case 9: day += 31;
	case 8: day += 31;
	case 7: day += 30;
	case 6: day += 31;
	case 5: day += 30;
	case 4: day += 31;
	case 3: day += (28 + leap);
	case 2: day += 31;
	}
	return day;
}
