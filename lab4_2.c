#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, x, y; 
    printf("Type a number: \n");
    scanf("%d", &x);
    for(i = 1; i <= x; i++){
        for (y=1; y<=i; y++){
            printf("%d\t",y);
        }
        printf("\n");
    }
    return 0;
}