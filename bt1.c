#include <stdio.h>

int main() {
	int arr[5];
	int sum = 0;
	printf("nhap 5 so nguyen cho mang:\n ");
	for(int i = 0; i < 5; i++) {
		printf("nhap so nguyen thu%d: ",i);
		scanf("%d", &arr[i]);
	}
	for(int i = 0 ; i < 5; i++) {
		if(arr[i] % 2 != 0) {
			sum += arr[i];
		}
	}
	printf("tong cac so le dax nhap la: %d", sum);

	return 0;
}