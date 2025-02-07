#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int a=1;
    while(a<=10){
        printf("%d x %d = %d\n",N,a,N*a);
        a+=1;
    }
    return 0;
}