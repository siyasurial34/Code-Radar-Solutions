#include <stdio.h>
#include <ctype.h>
int main() {
    char x;
    scanf("%c",&x);
    if (isdigit(x)){
        printf("Digit");
    }
    else if(x=='a' || x=='e' || x='i' || x=='o' || x=='u' || 
    x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
        printf("Vowels");
    }
    else if((x>='a' && x<= 'z') || (x>='A' && x<='Z') ){
        printf("Consonent");
    }
    else{
        printf("Special Character");
    }
    return 0;
}
