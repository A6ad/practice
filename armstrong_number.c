#include <stdio.h>
#include<math.h>
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
        sum += pow(digit,digits);
        num /= 10;
    }

    if(sum == original)
    return sum;
}
int main() {
    int number = 153;
    if(is_armstrong(number))
    {
      printf("%d is armstrong number\n",number);
    }
    else 
    {
      printf("%d is not an armstrong number",number);
    }

    return 0;
}