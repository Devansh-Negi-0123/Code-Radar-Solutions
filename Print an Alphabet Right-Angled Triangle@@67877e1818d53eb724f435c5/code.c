#include <stdio.h>

int main() {
    int n ;
    scanf("%d",&n);
    for (int i = 0 ; i < n ; i++){
        int count = 65 ;
        for(int j = 0 ; j < n-i; j++){
            printf("%c",count);
            count++ ;
        }
    } 
    return 0;
}