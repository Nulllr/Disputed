#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
float f(float x);
float xpoint(float x1, float x2);
float root(float x1, float x2);
int main(void) {
	float x1, x2;
	srand((unsigned int)time(NULL));
	do {
		x1 = rand() / 100.0f - 163;
		x2 = rand() / 100.0f - 163;
	} while (f(x1) * f(x2) > 0.0f);
	printf("x=%.4f\n", root(x1, x2));
}
float f(float x) {
	return ((x - 5.0f) * x + 16.0f) * x - 80.0f;
}
float xpoint(float x1, float x2) {
	return x2 - (f(x2) * (x2 - x1) / (f(x2) - f(x1)));
}
float root(float x1, float x2) {
	float x;
	do {
		x = xpoint(x1, x2);
		if (f(x1) * f(x) < 0.0f) x1 = x;
		else x2 = x;
	} while (fabs(f(x)) > 0.001f);
	return x;
}
