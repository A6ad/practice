#include <stdio.h>

int main() {
    int x = 12345;
    int reverse = 0;

    while(x !=0)
    {
        int remainder = x % 10;
        reverse = reverse * 10 + remainder;
        x /= 10;
    }
    printf("Reverse number: %d\n",reverse);
    return 0;
}