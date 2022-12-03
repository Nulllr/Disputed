#include<stdio.h>
void main(){
	float x,y;
	printf("«Î ‰»Îx=");
	scanf("%f",&x);
	if(x<=10) y=2*x;
	else if(x<50) y=(2*x)+1;
	else y=(x/2)+0.1;
	printf("y=%.1f",y);
}
