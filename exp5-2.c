#include<stdio.h>
#include<math.h>
#include<string.h>

int sum(int x, int y);
int min(int x, int y);
int multi(int x, int y);
float divide(int x, int y);

int main(void) {
	float resultd;
	int result;
	int x = 0;
	int y = 0;
	char equat[10];
	scanf("%9s", equat);
	size_t i, j, k, index, len = strlen(equat);
	for (i = 0; i < len; i++) {
		if (equat[i] < '0' || equat[i]>'9') index = i;
	}
	for (j = 0; j < index; j++) {
		x += pow(10, index - 1 - j) * (equat[j] - '0');
	}
	for (k = index + 1; k < len; k++) {
		y += pow(10, len - 1 - k) * (equat[k] - '0');
	}
	if (equat[index] == '+') result = sum(x, y);
	else if (equat[index] == '-') result = min(x, y);
	else if (equat[index] == '*') result = multi(x, y);
	else if (equat[index] == '/') resultd = divide(x, y);
	if (equat[index] == '/') printf("%s=%.8f\n", equat, resultd);
	else printf("%s=%d\n", equat, result);
}
int sum(int x, int y) {
	return x + y;
}
int min(int x, int y) {
	return x - y;
}
int multi(int x, int y) {
	return x * y;
}
float divide(int x, int y) {
	return 1.0f * x / y;
}
