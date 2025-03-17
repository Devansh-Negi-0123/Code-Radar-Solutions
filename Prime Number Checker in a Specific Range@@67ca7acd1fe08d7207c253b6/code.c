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
    int A[];
    if ( a == b ){
        if ( isPrime(a) == 0){
            printf("No prime numbers");
        }
    }
    if ( a < 2 && b > 2){
        a = 2 ;
    }
    if ( a < 2 && b < 2 ){
        printf("No prime numbers");
    }
    for ( int i = a ; i <= b ; i++){
        if (isPrime(i) == 1){
            A.append(i);
        }
    }
    if (sizeof(A) == 0 ){
        printf("No prime numbers");
    }
    else{
        for(int i = 0 , i < sizeof(A) ; i++){
            printf("%d", A[i]);
        }
    }
    return ;
}