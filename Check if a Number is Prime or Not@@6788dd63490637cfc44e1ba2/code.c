#include <stdio.h>

int main() {
    int n ;
    scanf("%d",&n);
    if(n == 2){
        printf("Prime");
    }
    else if ((n%2==0) || (n<1)){
        printf("Not Prime");
    }
    else{
        for (int i=3; i < n/2 + 1 ; i = i+2){
            if (n%i == 0){
                printf("Not Prime");
                break ;
            }           
        }
        printf("Prime");
    }
    return 0;
}