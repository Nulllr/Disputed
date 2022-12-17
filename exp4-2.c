#include<stdio.h>

void print(int x, int y, int a[][*]);

int main(void) {
	int x, y, i, j;
	fputs("请输入要转置的矩阵的行数和列数：", stdout);
	scanf("%d %d", &y, &x);
	puts("请输入矩阵内的元素，输完一个数字请按回车：");
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
	puts("转置后的矩阵：");
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
