#include <stdio.h>
#include <stdlib.h>

int main(){
    int c;
    while((c=getchar()) != EOF){
        if (c<='Z' && c>='A'){
            c +='a'-'A';
            printf("%c\n", c);
        }else if(c<='z' && c>='a'){
                c -='a'-'A';
                printf("%c\n", c);
        }
    }

    return 0;
}