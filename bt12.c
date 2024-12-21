#include <stdio.h>

int main() {
	int n, i;
	int a = 0, b = 1, next;

	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	printf("day fibonaci bao gom %d so la: \n", n);
	for (i = 1; i <= n; i++) {
		if (i == 1) {
			printf("%d ", a);
		} else if (i == 2) {
			printf("%d ", b);
		} else {
			next = a + b;
			a = b;
			b = next;
			printf("%d ", next);
		}
	}
	printf("\n");

	return 0;
}