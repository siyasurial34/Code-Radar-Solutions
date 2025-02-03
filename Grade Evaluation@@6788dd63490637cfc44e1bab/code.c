#include <stdio.h>

int main() {
    char str[1];
    scanf(" %s",str);

    if(str == 'A'){
        printf("Excellent");
    }
    else if(str == 'B'){
        printf("Good");
    }
    else if(str == 'C'){
        printf("Average");
    }
    else if(str == 'D'){
        printf("Below Average");
    }
    else if(str == 'F'){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
    }
    
      
    return 0;
}