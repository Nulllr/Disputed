#include<stdio.h>
int main(void) {
	float item, t;
	float b = 1, a = 2, sum = 0;
	for (int i = 1; i <= 20; i++) {
		item = a / b;
		sum += item;
		t = a;
		a += b;
		b = t;
	}
	printf("sum=%f\n", sum);
}