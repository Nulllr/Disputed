#include<stdio.h>
int main(void) {
	int a[10];
	int time = 0;
	int i, j, k;
	puts("�������ֺ��밴�س���");
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	int max = a[0];
	for (j = 0; j < 10; j++) {
		if (a[j] > max) {
			max = a[j];
		}
	}
	for (k = 0; k < 10; k++) {
		if (a[k] == max) {
			time++;
		}
	}
	printf("10�����е����ֵ��%d��һ��������%d�Ρ�\n", max, time);
}
