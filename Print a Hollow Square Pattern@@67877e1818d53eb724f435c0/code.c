#include <stdio.h>

int main() {
   int rows;
   scanf("%d",&rows);

    for(int i=1; i<=rows; i+=rows){
        for(int j=1; j<=rows; j++){
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}