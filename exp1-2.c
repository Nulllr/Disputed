#include<stdio.h>
#include<math.h>
void main(){
	int a,b,c;
	float s,p;
	do{
		printf("请输入三角形三边长a,b,c：");
		scanf("%d%d%d",&a,&b,&c);
		if(a+b<=c||a+c<=b||b+c<=a||a-b>=c||a-c>=b||b-c>=a)
            printf("三边边长不符合三角形边长关系！\n");
	}while(a+b<=c||a+c<=b||b+c<=a||a-b>=c||a-c>=b||b-c>=a);
	p=(a+b+c)/2.0;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("三角形面积=%.1f\n",s);
}
