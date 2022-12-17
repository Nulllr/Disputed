#include<stdio.h>
int main(void) {
	float x, y;
	fputs("«Î ‰»Îx=", stdout);
	scanf("%f", &x);
	if (x <= 10) y = 2 * x;
	else if (x < 50) y = (2 * x) + 1;
	else y = (x / 2) + 0.1f;
	printf("y=%.1f", y);
}
