#include <stdio.h>

int main() {
    int age;
    char name[100];
    char hobby[100];
    scanf("%c",&name);
    scanf("%d",&age);
    scanf("%ch",&hobby);
    printf("Name: %c\n",name );
    printf("Age: %d\n",age);
    printf("Hobby: %c\n",hobby);
    return 0;
}