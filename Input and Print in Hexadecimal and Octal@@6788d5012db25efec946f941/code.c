#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    printf("Hexadecimal: 0x%X\n",num);
    printf("Octal: 0%o\n",num);
    return 0;
}