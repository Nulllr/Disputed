#include<stdio.h>
#include<string.h>
char *str_delete(char *s,int v,int w){
	for(int i=v-1;i<strlen(s);i++){
		*(s+i)=*(s+i+w);
	}
	return s;
}
void main(){
	int v,w;
	char ch[20];
	gets(ch);
	printf("v=");
	scanf("%d",&v);
	printf("w=");
	scanf("%d",&w);
	printf("%s",str_delete(&ch[0],v,w));
}