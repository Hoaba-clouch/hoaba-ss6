#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, d;
    int thang;
    
    printf("nhap tien gui ban dau: ");
    scanf("%lf", &a);
    printf("nhap lai tren thang: ");
    scanf("%lf", &b);
    printf("nhap so thang da gui: ");
    scanf("%d", &thang);
    
    b = b / 100;
    c = a * pow(1 + b, thang);
    d = c - a;
      
    printf("tien lai: %.3f\n", d);
    printf("tien nhan duoc: %.3f\n", c);

    return 0;
}