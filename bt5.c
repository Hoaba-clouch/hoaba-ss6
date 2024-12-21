#include <stdio.h>

int main() {
    int ngay,thang,nam;
    
    printf("nhap nam: ");
    scanf("%d", &nam);
    printf("nhap thang (1-12): ");
    scanf("%d", &thang);

    if (thang < 1 && thang > 12) {
        printf("thang khong hop le,nhap lai 1-12.\n");
    } else {
        switch (thang) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                ngay = 31;
                break;
            case 4: case 6: case 9: case 11:
                ngay = 30;
                break;
            case 2:
                if ((nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)) {
                    ngay = 29;
                } else {
                    ngay = 28;
                }
                break;
        }
        printf("thang %d nam %d co %d ngay.\n", thang, nam, ngay);
    }
    return 0;
}
