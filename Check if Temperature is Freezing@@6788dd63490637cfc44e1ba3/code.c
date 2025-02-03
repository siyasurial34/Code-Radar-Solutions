#include <stdio.h>

int main() {
    float x;
    scanf("%f",&x);

    if(x<=0){
        printf("Freezing");
    }
    else{
        printf("Above Freezing");
    }

    return 0;
}