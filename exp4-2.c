#include<stdio.h>

void print(int x, int y, int a[][*]);

int main(void) {
	int x, y, i, j;
	fputs("������Ҫת�õľ����������������", stdout);
	scanf("%d %d", &y, &x);
	puts("����������ڵ�Ԫ�أ�����һ�������밴�س���");
	int before[x][y];
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			scanf("%d", &before[i][j]);
		}
	}
	print(x, y, before);
	int after[y][x];
	for (i = 0; i < y; i++) {
		for (j = 0; j < x; j++) {
			after[i][j] = before[j][i];
		}
	}
	puts("ת�ú�ľ���");
	print(y, x, after);
}

void print(int x, int y, int a[][y]) {
	int i, j;
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			printf("arr[%d][%d]=%d\t", i, j, a[i][j]);
		}
		putchar('\n');
	}
}
