#include <stdio.h>

int main() {
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int transpose_mat [3][3] = {0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            transpose_mat[j][i] = arr[i][j];
        }
    }


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",transpose_mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}