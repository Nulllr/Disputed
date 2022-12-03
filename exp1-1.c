#include<stdio.h>
void main(){
	float x,a,b,c,d;
	printf("请分别输入a,b,c,d,x的值：");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&x);
	printf("ax^3+bx^2+cx+d的值为%.2f\n",(((a*x+b)*x+c)*x)+d);
}
