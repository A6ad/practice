#include <stdio.h>

int main() {
    int num = 121, reversed=0,remainder,original;

    printf("Enter a number\n");

    original = num;
    while(num!= 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if(original==reversed)
    {
        printf("%d is a palindrome.\n",original);
    }
    else {
        printf("not a palindrome");
    }

    return 0;
}