#include <stdio.h>
int main() {
    int rows;
    scanf("%d",&rows);

    for(int i=1; i<=rows; i++){
        int a=1;
        for(int j=1; j<=i; j++){
            printf("%d",a);
            a+=1;
        }
        printf("\n");
    }
    return 0;
}