#include <stdio.h>
int main() {
    int num,n;
    scanf("%d %d",&num,&n);

    if(n<0 || n>31){
        return 1;
    }
    int bit_val = (num>>n) & 1;
    print("%d",n);
    return 0;
}