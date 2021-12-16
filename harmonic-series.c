#include <stdio.h>

int main() {
	float x = 1.0;
	float sum = 0.0;
	for(float i = 1; i < 10; i++) {
		x /= (float)i;
		sum += x;
		printf("%f\n", sum);
	}
	return 0;
}
