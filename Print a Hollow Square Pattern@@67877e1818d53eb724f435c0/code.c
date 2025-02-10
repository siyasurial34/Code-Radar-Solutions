#include <stdio.h>

int main() {
   int rows;
   scanf("%d",&rows);

    for(int i=1; i<=rows; i+=rows){
        for(int j=1; j<=rows; j++){
            printf("*");
        }
        for(int i=2; i<=rows; i++){
            for(int j=1; j<=i; j++){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}