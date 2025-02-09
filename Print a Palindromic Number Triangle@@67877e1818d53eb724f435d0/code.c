#include <stdio.h>

int main() {
    int n ;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 2*n -1 ; j++){
            int count = 1 ;
            if((j<n-i-1)||(j>n+i+1)){
                printf(" ");
            }
            else{
                printf("%d",count);
                count++ ;
            }
        }
        printf("\n");
    }
    return 0;
}