void fib(int n) {
    static int n1 = 0, n2 = 1;  // Static variables to maintain state
    if (n > 0) {
        if (n == 1) {  
            printf("0\n");  // Special case for n = 1
            return;
        }

        if (n == 2) {
            printf("0 1\n");  // Special case for n = 2
            return;
        }

        printf("0 1 ");  // Print the first two Fibonacci numbers

        int n3;  
        for (int i = 2; i < n; i++) {
            n3 = n1 + n2;
            printf("%d ", n3);
            n1 = n2;
            n2 = n3;
        }
        printf("\n");
    }
}