#include <stdio.h>

int main() {
    int a,b,c,tong;
    
     printf("cac so armstrong co 3 chu so la:\n");
      for (int i = 100; i <= 999; i++) {
         a = i / 100;         
         b= (i / 10) % 10;   
         c= i % 10;  
         tong = (a * a * a) + (b * b * b) + (c * c * c);
         
           if (tong == i) {
            printf("%d ", i);
           }
    }
    printf("\n");

    return 0;
}