#include <stdio.h>

int main() {
    int a , b ;
    char c ;
    scanf("%d %d %c" , &a ,&b ,&c);
    int ans ;
    if (c == '+'){
        ans = a + b ;
        printf("%d", ans);
    }
    else if (c == '-'){
        ans = a - b ;
        printf("%d", ans);
    }
    else if (c == '*'){
        ans = a * b ;
        printf("%d", ans);
    }
    else{
        if (b == 0){
            printf("Error");
        }
        else{
            ans = a / b ;
            printf("%d",ans);
        }
    }
    return 0;
}