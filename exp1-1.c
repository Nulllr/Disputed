#include<stdio.h>
void main(){
	float x,a,b,c,d;
	printf("��ֱ�����a,b,c,d,x��ֵ��");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&x);
	printf("ax^3+bx^2+cx+d��ֵΪ%.2f\n",(((a*x+b)*x+c)*x)+d);
}
