#include<stdio.h>
struct cand{
	char name[20];
	int votes;
}cand[2];
void swap(int *x,int *y){
	int t=*x;
	*x=*y;
	*y=t;
}
void main(){
	int i,j,k;
	char vote;
	printf("请输入候选人姓名：");
	for(i=0;i<3;i++){
		scanf("%s",cand[i].name);
	}
	printf("请输入选票所选人的姓名：");
	for(i=0;i<6;i++){
		scanf("%s",&vote);
		for(j=0;j<3;j++){
			if(*cand[j].name==vote) cand[j].votes++;
		}
	}
	for(i=0;i<3;i++){
		for(j=i;j<3;j++){
			if(cand[j+1].votes>cand[j].votes){
				swap(&cand[j+1].votes,&cand[j].votes);
				char t[20];
				for(k=0;k<20;k++){
					t[k]=cand[j].name[k];
					cand[j].name[k]=cand[j+1].name[k];
					cand[j+1].name[k]=t[k];
				}
			}
		}
	}
	printf("按得票数顺序排序候选人及选票：\n");
	for(i=0;i<3;i++){
		printf("%s\t%d\n",cand[i].name,cand[i].votes);
	}
}
