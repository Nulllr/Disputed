#include<stdio.h>
#include<math.h>
int main(void) {
	int a, b, c;
	double s, p;
	do {
		fputs("���������������߳�a,b,c��", stdout);
		scanf("%d%d%d", &a, &b, &c);
		if (a + b <= c || a + c <= b || b + c <= a)
			puts("���߱߳������������α߳���ϵ��");
	} while (a + b <= c || a + c <= b || b + c <= a);
	p = (a + b + c) / 2.0;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("���������=%.1f\n", s);
}
