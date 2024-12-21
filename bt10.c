#include <stdio.h>

int main() {
	int a, b = 1;

	printf("nhap 1 so nguyen duong: ");
	scanf("%d", &a);

	if (a <= 1) {
		b = 0;
	} else {
		for(int i = 2; i * i <= a; i++) {
			if (a % i == 0) {
				b = 0;
				break;
			}
		}
	}
	if (b) {
		printf("%d la so nguyen duong.\n", a);
	} else {
		printf("%d khong phai la so nguyen duong.\n", a);
	}

	return 0;
}