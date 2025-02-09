#include <stdio.h>
#include <stdbool.h>

int main() {
    int n ;
    scanf("%d",&n);
    bool prime = true ;
    if(n == 2){
        prime = true ;
    }
    else if ((n%2==0) || (n<1)){
        prime = false ;
    }
    else{
        for (int i=3; i < n/2 + 1 ; i = i+2){
            if (n%i == 0){
                prime = false ;
                break ;
            }        
        }
    }
    if (prime == true){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}