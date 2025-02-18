#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num<=1){
        printf("Not Prime");
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            printf("Not Prime");
            return 0;
        }
        else{
            printf("prime");
        }
        return 0;
    }
}