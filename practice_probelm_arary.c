#include <stdio.h>

int main() {
    int arr[5];
    for(int i=0;i<5;i++)
    {
    scanf("%d",&arr[i]);
    }
    int last = arr[4];

    for(int i=4;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0] = last;
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
 
    return 0;
}