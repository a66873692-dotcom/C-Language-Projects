#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the row and column of the square matrix:");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    int new_arr[m][n];
    printf("\nEnter the elements of the matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("\n Original Matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
            new_arr[i][n-1-j]=arr[i][j];
        }
    }
    printf("\n Mirror image of the matrix is :\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",new_arr[i][j]);
        }
        printf("\n");
    }
}