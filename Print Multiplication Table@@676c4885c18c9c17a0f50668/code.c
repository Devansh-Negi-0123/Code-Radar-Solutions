#include <stdio.h>

int main() {
    int n ;
    scanf("%d",&n);
    for (int i = 1 ; i < 11 ; i++){
        int product = n ;
        printf("2 * ");
        printf("%d",i);
        printf("= ");
        printf("%d",product);
        product += n ;
        printf("\n");
    }
    return 0;
}