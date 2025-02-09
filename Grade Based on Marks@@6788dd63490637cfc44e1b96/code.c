#include <stdio.h>

int main() {
    int n ;
    scanf("%d",&n);
    char grade ;
    switch (true) {
        case(n>=90):
            grade = A ;
            break ;
        case((n>=80) && (n<90)):
            grade = B ;
            break ;
        case((n>=70) && (n<80)):
            grade = C ;
            break ;
        case((n>=60) && (n<70)):
            grade = D ;
            break ;
        case(n <= 60):
            grade = F ;
            break ;
    }
    printf("%c",grade);
    return 0;
}