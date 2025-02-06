#include <stdio.h>

int main() {
    char c ;
    scanf("%c",&c);
    int a = ("%d",c);
    if (((a>96)&&(a<123))||((a>64)&&(a<92))){
        if((a == 65)||(a == 69)||(a == 73)||(a == 79)||(a == 85)||(a == 97)||(a == 101)||(a == 105)||(a == 111)||(a == 117)){
            printf("Vowel");
            return 0 ;
        }
        else{
            printf("Consonant");
        }
    }
    else if (((a>47)&&(a<58))){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}