#include<stdio.h>
void main(){
    int day_of_year(int year,int month,int day);
	int a,b,c;
	printf("请输入您要查询的年月日：");
	scanf("%d%d%d",&a,&b,&c);
	printf("%d年%d月%d日是这一年的第%d天。\n",a,b,c,day_of_year(a,b,c));
}
int day_of_year(int year,int month,int day){
	int leap=0;
	int a=0;
	if(year%4==0){
		leap++;
		if(year%100==0){
			leap--;
			if(year%400==0) leap++;
		}
	}
	switch(month){
		case 12: a+=30;
		case 11: a+=31;
		case 10: a+=30;
		case 9: a+=31;
		case 8: a+=31;
		case 7: a+=30;
		case 6: a+=31;
		case 5: a+=30;
		case 4: a+=31;
		case 3:
			a+=28;
			a+=leap;
		case 2: a+=31;
		case 1: {}
	}
	return a+day;
}
