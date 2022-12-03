#include<stdio.h>
void main(){
    int i;
	char ch[20];
	scanf("%s",ch);
	for(i=0;ch[i]!='\0';i++){
		if('A'<=ch[i]&&ch[i]<='V') ch[i]+=('e'-'A');
		else if('W'<=ch[i]&&ch[i]<='Z') ch[i]+=('a'-'W');
		else if('a'<=ch[i]&&ch[i]<='v') ch[i]+=('E'-'a');
		else if('w'<=ch[i]&&ch[i]<='z') ch[i]+=('A'-'w');
	}
	printf("%s\n",ch);
}
