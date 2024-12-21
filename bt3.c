#include <stdio.h>
#include <string.h>
int main(){
    char a[50]="12345";
    char b[50];
    printf("nhap mat khau: ");
    scanf("%s", b);
    
    if (strcmp(a, b) == 0) {
        printf("mk chinh xac");
}else{
    printf("mk sai,nhap lai: ");
    scanf("%s", b);
    printf("mk chinh xac");
}
return 0;
}