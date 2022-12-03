#include<stdio.h>
#include<string.h>
void main(){
    void arrange(char c[],int k,int len);
	int i,j,k;
	char ch[20];
	scanf("%s",ch);
	int len=strlen(ch);
	for(i=0;i<=len;i++){
		for(j=1;j<len;j++){
			if(ch[j-1]>ch[j]){
				char t=ch[j];
				ch[j]=ch[j-1];
				ch[j-1]=t;
			}
		}
	}
	for(i=0;i<len;i++){
		for(j=i;j<len;j++){
			if(ch[i]==ch[i+1]){
				for(k=0;k<len;k++){
					ch[i+k]=ch[i+k+1];
				}
			}
		}
	}
	printf("%s\n",ch);
	arrange(ch,0,strlen(ch)-1);
}
void arrange(char c[],int k,int len){
	int i;
	if(k==len) printf("%s\n",c);
	else{
		for(i=k;i<=len;i++){
			char t=c[i];
			c[i]=c[k];
			c[k]=t;
			arrange(c,k+1,len);
			t=c[i];
			c[i]=c[k];
			c[k]=t;
		}
	}
}
