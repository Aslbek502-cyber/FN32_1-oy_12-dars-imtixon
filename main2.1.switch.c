#include <stdio.h>

int main() {

int i;
    printf("hafta kunini kiriting: ");
    scanf("%d", &i);

    switch(i){
    case 1:
        printf("dushanba");
    break;
    case 2:
        printf("seshanba");
    break;
    case 3:
        printf("chorshanba");
    break;
    case 4:
        printf("payshanba");
    break;
    case 5:
        printf("juma");
    break;
    case 6:
        printf("shanba");
    break;
    case 7:
        printf("yakshanba");
    break;
    default:
    printf("noto'g'ri kun");

    }
    
    return 0;
}