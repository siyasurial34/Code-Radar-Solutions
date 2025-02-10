#include <stdio.h>

int main() {
    int rows;
    scanf("%d",&rows);

    for(int i=1; i<=rows; i++){
        int num=0;
        for(int j=1; j<=i; j++){
            if(i==1){
                printf("%d",1);
            }
            else{
                printf("%d ",num);
                num+=1;
            }
        }
        printf("\n");
    }
    return 0;
}