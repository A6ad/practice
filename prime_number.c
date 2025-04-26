#include <stdio.h>

int main() {
    int n = 15;
    
    for(int i=2; i<=n ; i++)
    {
      int isprime = 1;
        for(int j=2; j*j<=i ;j++)
        {
          if(i%j == 0 )
          {
            isprime = 0;
            break;
          }
         
        }

        if(isprime)
        {
            printf("%d\n",i);
        }

    }
    return 0;
}