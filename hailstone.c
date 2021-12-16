#include <stdio.h>

int main() {
	int i = 27;
	for(;;) {
		printf("%d ", i);
		if(i % 2 == 0) {
			i /= 2;
		}
		else if(i == 1) {
			printf("\ndone\n");
			break;
		}
		else {
			i *= 3;
			i++;
		}
	}
	return 0;
}
