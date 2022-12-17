#include<stdio.h>
#include<math.h>
int main(void) {
	int a, b, c;
	double s, p;
	do {
		fputs("请输入三角形三边长a,b,c：", stdout);
		scanf("%d%d%d", &a, &b, &c);
		if (a + b <= c || a + c <= b || b + c <= a)
			puts("三边边长不符合三角形边长关系！");
	} while (a + b <= c || a + c <= b || b + c <= a);
	p = (a + b + c) / 2.0;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("三角形面积=%.1f\n", s);
}
