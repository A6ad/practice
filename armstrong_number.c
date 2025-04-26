#include <stdio.h>
int is_armstrong(int num)
{
    int original = num ,sum =0,digits =0;

  while(num!=0)
  {
    digits ++;
    num /=10;
  }
    num = original;
     
    while (num!=0)
    {
        int digit= num % 10;
        sum += pow()
    }
}
int main() {
    printf("%d",is_armstrong(153));
    return 0;
}