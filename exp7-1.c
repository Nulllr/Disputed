#include<stdio.h>
#include<string.h>
char* str_delete(char* s, int v, int w) {
	int slen = (int)strlen(s);
	for (int i = v - 1; i < slen; i++) {
		*(s + i) = *(s + i + w);
	}
	return s;
}
int main() {
	int v, w;
	char ch[20];
	fgets(ch, 20, stdin);
	fputs("v=", stdout);
	scanf("%d", &v);
	fputs("w=", stdout);
	scanf("%d", &w);
	fputs(str_delete(&ch[0], v, w), stdout);
}
