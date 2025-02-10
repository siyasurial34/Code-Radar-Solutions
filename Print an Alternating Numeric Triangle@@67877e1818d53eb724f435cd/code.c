#include <stdio.h>

int main() {
    int rows;
    scanf("%d",&rows);

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            if(i%2!=0){
                printf("%d",j%2);
            }
            else if(i%2==0){
                if(j%2!=0){
                    printf("0");
                }
                else{
                    printf("1");
                }
            }
        }
        printf("\n");
    }
    return 0;
}