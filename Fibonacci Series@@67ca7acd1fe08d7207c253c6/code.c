fibonacciSeries(int n,int n1,int n2){
    
    if(n==1){
        return 0;
    }
    if(n>0){
      int n3=n1+n2;
      printf("%d",n3);
      fibonacciSeries(n-1,n2,n3);
    }
}