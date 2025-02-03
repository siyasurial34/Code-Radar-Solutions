#include <stdio.h>
int main(){
    int a ,b;
    scanf("%d %d",&a,&b);

    char op;
    scanf("%c",&op);

    int result;

    switch(op){
        case '+':
        result = a+b;
        printf("%d", result);
        break;

        case '-':
        result=a-b;
        printf("%d",result);
        break;
    }
    return 0;
}