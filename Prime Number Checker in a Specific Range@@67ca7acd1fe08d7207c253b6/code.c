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
    if ( a == b && isPrime(a) == 0){
        printf("No prime numbers");
    }
    for ( int i = a ; i <= b ; i++){
        if(isPrime(i) == 1){
            printf("%d ",i);
        }
    }
    return ;
}