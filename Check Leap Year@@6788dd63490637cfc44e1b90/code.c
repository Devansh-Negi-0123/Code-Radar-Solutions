#include <stdio.h>

int main() {
    int a ;
    scanf("%d";&a);
    if (a % 4 == 0){
        if(a % 100 == 0){
            if (a % 400 == 0){
                printf("Leap Year");
                return 0 ;
            }
            printf("Not a Leap Year");
            return 0 ;
        }
        prntf("Leap Year");
    }
    return 0;
}