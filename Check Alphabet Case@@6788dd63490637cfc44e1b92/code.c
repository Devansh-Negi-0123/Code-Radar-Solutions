#include <stdio.h>

int main() {
    char c ;
    scanf("%c",&c);
    int a = ("%d",c);
    if ((a > 64)&&(a<92)){
        printf("Uppercase");
    }
    else if ((a > 97)&& (a < 123)) {
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}