int prime( int p ){
    if(p <= 1)
        return 0;
    else{
        for(int i = 2; i <= sqrt(p); i++){
            if(p%i == 0)
                return 0;
        }
        return 1;
    }
}
int PrimeSum( int m, int n ){
    int sum = 0;
    for (int j = m; j <= n; j++){
        if(prime(j))
            sum+=j;
    }
    return sum;
}