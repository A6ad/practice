#include <stdio.h>

int main() {
    int arr[5];
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }

    
    int x = arr[1];
    for(int i=0;i<5;i++)
    {
        if(arr[i]<x)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}