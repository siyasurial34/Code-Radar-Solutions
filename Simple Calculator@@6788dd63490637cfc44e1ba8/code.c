#include <stdio.h>

int main() {
    int a,b,result;
    scanf("%d %d",&a,&b);

    char op;
    scanf("%c",op);

    switch(op){
        case '+':
        result = a+b;
        printf("%d",result);
        break;

        case '-':
        printf("%d",a-b);
        break;

        case '*':
        printf("%d",a*b);
        break;

        case '/':
        printf("%d",a/b);
        break;


        default:
        printf("Invalid");
    }
    return 0;
}