#include<stdio.h>
int main(void) {
	int i;
	char buf[20];
	scanf("%19s", buf);
	for (i = 0; buf[i] != '\0'; i++) {
		if ('A' <= buf[i] && buf[i] <= 'V') buf[i] += ('e' - 'A');
		else if ('W' <= buf[i] && buf[i] <= 'Z') buf[i] += ('a' - 'W');
		else if ('a' <= buf[i] && buf[i] <= 'v') buf[i] += ('E' - 'a');
		else if ('w' <= buf[i] && buf[i] <= 'z') buf[i] += ('A' - 'w');
	}
	puts(buf);
}
