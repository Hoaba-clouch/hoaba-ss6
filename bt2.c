#include <stdio.h>

int main() {
	int arr[5];
	int a = 0, b = 0;
	printf("nhap 5 so nguyen cho mang:\n ");
	for(int i = 0; i < 5; i++) {
		printf("nhap so nguyen thu%d: ",i);
		scanf("%d", &arr[i]);
	}
	for(int i = 0 ; i < 5; i++) {
		if(arr[i] % 2 == 0) {
		a++; // chan
		}else{
		b++; // le    
		}
	}
	printf("cac so le dax nhap la: %d\n", b);
    printf("cac so chan dax nhap la: %d ", a);
    
	return 0;
}