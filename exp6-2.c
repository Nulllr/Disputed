#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
void main(){
	float x1,x2;
	float f(float x);
	float xpoint(float x1,float x2);
	float root(float x1,float x2);
	srand((unsigned int)time(0));
	do{
		x1=rand()/100.0-163;
		x2=rand()/100.0-163;
	}while(f(x1)*f(x2)>0);
	printf("x=%.4f\n",root(x1,x2));
}
float f(float x){
	return ((x-5.0)*x+16.0)*x-80.0;
}
float xpoint(float x1,float x2){
	return x2-(f(x2)*(x2-x1)/(f(x2)-f(x1)));
}
float root(float x1,float x2){
    float x;
	do{
		x=xpoint(x1,x2);
		if(f(x1)*f(x)<0) x1=x;
		else x2=x;
	}while(fabs(f(x))>0.001);
	return x;
}
