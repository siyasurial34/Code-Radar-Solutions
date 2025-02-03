#include <stdio.h>
int main(){
    int a ,b;
    scanf("%d %d",&a,&b);

    char operator;
    scanf(" %c",&operator);

    int result;

    switch(operator){
        case '+':
        result = a+b;
        printf("%d", result);
        break;

        case '-':
        result=a-b;
        printf("%d",result);
        break;

        case '*':
        result=a*b;
        printf("%d",result);
        break;

        case '/':
        if(b!=0){
            result = a/b;
            printf("%d",result);
        }
        else{
            printf("error");
        }
        break;
        default:
        printf("Invalid")
        }
    
    return 0;
}