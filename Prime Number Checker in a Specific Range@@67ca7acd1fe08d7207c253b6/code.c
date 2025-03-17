int isPrime ( int n ) {
    if ( n == 2 ){
        return 1 ;
    }
    if ( n % 2 == 0 || n == 1){
        return 0 ;
    }
    for ( int i = 3 ; i < n/2 + 1 ; i = i + 2){
        if ( n % i == 0){
            return 0 ;
        }
    }
    return 1 ;
}

void printPrimesInRange ( int a , int b ) { 
    if ( a == b ){
        if (isPrime(a) == 1){
            printf("a ");
        }
        else{
            printf("No prime numbers");
        }
    }
    if ( a <= 2){
        printf("2 ");
        for (int i = 3 ; i <= b ; i = i + 2){
            if (isPrime(i) == 1){
                printf("%d ",i);
            }
        }
    }
    else{
        if (a % 2 == 0 && a != 2){
            for (int i = a + 1 ; i <= b ; i = i + 2){
                if (isPrime(i) == 1 ){
                    printf("%d ",i);
                }
            }
        }
        if ( a % 2 == 1 ) { 
            for (int i = a ; i <= b ; i = i + 2){
                if ( isPrime(i) == 1 ){
                    printf("%d ",i);
                }
            }
    }
}
    return ;
}