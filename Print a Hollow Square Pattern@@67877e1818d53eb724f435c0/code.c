#include <stdio.h>

int main() {
   int rows;
   scanf("%d",&rows);

    for(int i=1; i<=rows; i+=rows){
        for(int j=1; j<=rows; j++){
            printf("*");
        }
        for(int k=2; k<=rows; k++){
            for(int l=1; l<=i; l++){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}