int fibonacciSeries(int n){
    static int n1=0,n2=1,n3;
    if(n==1){
        printf("0");
        return 0;
    }
    printf("0 1 ");
    for (int i = 2; i < n; i++) {
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }
}