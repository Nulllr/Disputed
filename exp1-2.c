#include<stdio.h>
#include<math.h>
void main(){
	int a,b,c;
	float s,p;
	do{
		printf("���������������߳�a,b,c��");
		scanf("%d%d%d",&a,&b,&c);
		if(a+b<=c||a+c<=b||b+c<=a||a-b>=c||a-c>=b||b-c>=a)
            printf("���߱߳������������α߳���ϵ��\n");
	}while(a+b<=c||a+c<=b||b+c<=a||a-b>=c||a-c>=b||b-c>=a);
	p=(a+b+c)/2.0;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("���������=%.1f\n",s);
}
