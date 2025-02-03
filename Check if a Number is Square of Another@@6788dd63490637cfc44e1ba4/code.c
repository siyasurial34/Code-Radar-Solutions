#include <stdio.h>
#include<math.h>

int main() {
    int a ,b;
    scanf("%d %d",&a,&b);
    int power;
    power=pow(b,2);
    if(power==a){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}