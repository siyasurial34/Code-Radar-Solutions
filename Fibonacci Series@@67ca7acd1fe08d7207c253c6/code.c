int fibonacciSeries(int n){
    int n1,n2,n3;
    if(n==1){
        return 0;
    }
    if(n>0){
      n3=n1+n2;
      printf("%d",n3);
      n1=n2;
      n2=n3;
      fibonacciSeries(n-1);
    }
}