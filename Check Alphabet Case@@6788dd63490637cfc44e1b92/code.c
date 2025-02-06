#include <stdio.h>

int main() {
    char c ;
    scanf("%c",&c);
    int a = ("%d",c);
    if ((a > 64)&&(a<92)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}