#include <stdio.h>
int fibonacci(int term)
{
    if(term == 0)
    return 0;
    else if(term == 1)
    return 1;
    else {
        return fibonacci(term -1 )+ fibonacci(term -2);
    }
}
int main() {
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",fibonacci(i));
    }
    printf("\n");
    return 0;
}