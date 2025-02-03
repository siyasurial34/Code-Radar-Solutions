#include <stdio.h>

int main() {
    int a,b;
    float result;
    scanf("%d %d",&a,&b);

    char op;
    scanf("%c",op);

    switch(op){
        case '+':
        result = a+b;
        printf("%f",result);
        break;

        case '-':
        result=a-b;
        printf("%f",result);
        break;

        case '*':
        result=a*b;
        printf("%f",result);
        break;

        case '/':
        if(b!=0){
            result = a/b;
            printf("%f",result);
        }
        else{
            printf("Error");
        }
        break;

        default:
        printf("Invalid");

    }
    return 0;
}