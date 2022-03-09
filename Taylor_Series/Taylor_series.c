#include <stdio.h>

#define PI 3.141592653589793238

double sin(double x, int Count) {  //입력각도, Count번째 항까지 계산
	double Term = x; // 항
	double sum = Term;

	if (x < 0) {
		return -sin(-x, Count);
	}
	while (x >= 2 * PI) {
		x -= 2 * PI;
	}

	for (int n = 1; n < Count; n++) { 
		Term *= -(x * x) / (2 * n * (2 * n + 1)); // -x^2/2n(2n+1)
		sum += Term;
	}
	return sum;
}


int main() {

	double input = 0;
	int Count = 0;
	
	while (1) {
		scanf_s("%lf %d", &input, &Count);
		input *= (PI / 180);
		printf("%lf\n", sin(input, Count));
	}

	return 0;
}

