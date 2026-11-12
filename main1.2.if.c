
#include <stdio.h>

int main() {
int a, b, c;

           printf("son kiriting: ");
 scanf("%d", &a);

    printf("son kiriting: ");
             scanf("%d", &b);

        printf("son kiriting: ");
    scanf("%d", &c);

    if (a >= b && a >= c) {
           printf("katta son: ");
        printf("%d", a);
    }

       if (b >= a && b >= c) {
           printf("katta son: ");
        printf("%d", b);
    }

          if (c >= a && c >= b) {
        printf("katta son: ");
         printf("%d", c);
    }

    return 0;
}
