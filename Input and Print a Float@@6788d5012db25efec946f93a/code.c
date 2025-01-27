#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    printf("Enter a");
    scanf("%f",&a);
    printf("%f",a)
    printf("%s", welcome());
    return 0;
}