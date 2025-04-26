#include <stdio.h>        //corrected code//

int main () {
    int a[] = {0, 0, 1, 2, 3}, b[] = {0, 0, 4, 5, 6};
    int *ptr1 = a, *ptr2 = b;

    // while (!*ptr1++ && !*ptr2++);

    // printf("%d %d\n", ptr1 - a, ptr2 - b);

    return 0;
}   