#include<stdio.h>
#include<math.h>
#include<string.h>
void main(){
    int sum(int x,int y);
    int min(int x,int y);
    int multi(int x,int y);
    float divide(int x,int y);
	float resultd;
	int result,i,j,k,index;
	int x=0;
	int y=0;
	char equat[10];
	scanf("%s",equat);
	int len=strlen(equat);
	for(i=0;i<len;i++){
		if(equat[i]<'0'||equat[i]>'9') index=i;
	}
	for(j=0;j<index;j++){
		x+=pow(10,index-1-j)*(equat[j]-'0');
	}
	for(k=index+1;k<len;k++){
		y+=pow(10,len-1-k)*(equat[k]-'0');
	}
	if(equat[index]=='+') result=sum(x,y);
	else if(equat[index]=='-') result=min(x,y);
	else if(equat[index]=='*') result=multi(x,y);
	else if(equat[index]=='/') resultd=divide(x,y);
	if(equat[index]=='/') printf("%s=%.8f\n",equat,resultd);
	else printf("%s=%d\n",equat,result);
}
int sum(int x,int y){
	return x+y;
}
int min(int x,int y){
	return x-y;
}
int multi(int x,int y){
	return x*y;
}
float divide(int x,int y){
	return 1.0*x/y;
}
