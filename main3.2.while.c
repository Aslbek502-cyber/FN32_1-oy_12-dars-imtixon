#include <stdio.h>

int main() {
int i, son;
int count = 0;
    while(1){
        
        printf("son kiriting: ");
    scanf("%d", &son);
    if(son == 0){
        break;
    }
    count += son;
    }
    
printf("%d", count);
    
    
    

    return 0;
}