#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if (isupper(ch)) {
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    printf("%s", welcome());
    return 0;
}