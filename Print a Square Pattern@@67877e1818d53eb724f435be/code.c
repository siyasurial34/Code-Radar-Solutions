#include <stdio.h>

int main() {
    int rows;
    scanf("%d",&rows);

    int(int i=1; i<=rows; i++){
        for(int j=1; j<=rows; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}