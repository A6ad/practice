#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
   
    while(n--)
    {
        int count = 0 ;
        int x;
        scanf("%d",&x);
        while(x>=1)
        {
            x/=2;
            count++;
        }
        printf("%d\n",count);
    }

    return 0;
}