#include <stdio.h>

int main() {

    int a;
    printf("son kiritng: ");
    scanf("%d", &a);
    if(a >= 0){
        printf("musbat son");
    } else if (a <= 0){
        printf("musbat emas");
    }
    return 0;
}