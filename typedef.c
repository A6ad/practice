#include <stdio.h>
typedef struct my_struct
{
    int feet;
    double inch;
}structure1;
int main() {
    structure1 s1,s2;
    s1.feet = 1200;
    s1.inch = 12.45;

    printf("%d %.5lf",s1.feet,s1.inch);
 

    return 0;
}