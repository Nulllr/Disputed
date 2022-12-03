#include<stdio.h>
int find_max(int *p,int n){
	int max=0;
	for(int i=0;i<n;i++){
		if(*p>max) max=*p;
		p++;
	}
	return max;
}
int find_min(int *p,int n){
	int min=999;
	for(int i=0;i<n;i++){
		if(*p<min) min=*p;
		p++;
	}
	return min;
}
void main(){
	int x;
	printf("请输入x：");
	scanf("%d",&x);
	int num[10]={9,7,6,12,44,53,32,11,29,x};
	printf("数组中最大值为%d，最小值为%d\n",find_max(&num[0],10),find_min(&num[0],10));
}