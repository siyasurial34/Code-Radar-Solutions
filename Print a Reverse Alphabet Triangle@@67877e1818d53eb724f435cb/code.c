#include <stdio.h>

int main() {
    int rows;
    scanf("%d",&rows);

    for(int i=rows; i>=1; i--){
        int c=65;
        for(int j=1; j<=i; j++){
            printf("%c ",c);
            c+=1;
        }
        printf("\n");
    }
    return 0;
}