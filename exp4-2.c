#include<stdio.h>
void main(){
    void print(int x,int y,int a[x][y]);
	int x,y,i,j;
	printf("������Ҫת�õľ����������������");
	scanf("%d %d",&y,&x);
	printf("����������ڵ�Ԫ�أ�����һ�������밴�س���\n");
	int before[x][y];
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			scanf("%d",&before[i][j]);
		}
	}
	print(x,y,before);
	int after[y][x];
	for(i=0;i<y;i++){
		for(j=0;j<x;j++){
			after[i][j]=before[j][i];
		}
	}
	printf("ת�ú�ľ���\n");
	print(y,x,after);
}
void print(int x,int y,int a[x][y]){
    int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("arr[%d][%d]=%d\t",i,j,a[i][j]);
		}
		printf("\n");
	}
}
