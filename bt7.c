#include <stdio.h>

int main() {
    int a;
    
    printf("nhap so nguyen: ");
    scanf("%d",&a);
    printf("cac uoc cua %d la: ",a);
    
      for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            printf("%d ", i);
        }
    }printf("\n");
    
      return 0;
    
}
