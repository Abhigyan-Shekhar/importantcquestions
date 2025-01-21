#include <stdio.h>

int main() {
    // Your code starts here
    char ch;
    printf("Enter a char!\n");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'){
        printf("The Entered char is in uppercase\n");
        printf("The character in lowercase is %c",(ch+32));
    }
    else if(ch>='a'&&ch<='z'){
        printf("The Entered char is in lowercase\n");
        printf("The character in uppercase is %c",(ch-32));
    }
    else{
        printf("Invalid input");
    }
    return 0;
    }