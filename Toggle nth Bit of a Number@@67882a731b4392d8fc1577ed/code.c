#include <stdio.h>

int main() {
    int num,n;
    scanf("%d %d",&num,&n);

    if(n<0 || n>31){
        return 1;
    }
    new_num= num ^ (1<< n);
    printf("%d",new_num);
    return 0;
}