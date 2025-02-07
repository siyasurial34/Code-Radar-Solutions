#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int a=1;
    int sum=0;
    while(a<=N){
        sum+=a;
        a+=1;
    }
    printf("%d",sum);
    return 0;
}