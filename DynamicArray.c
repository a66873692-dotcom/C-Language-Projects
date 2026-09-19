#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    if (arr==NULL)
      return 1;
    
    printf("\nEnter the elements of the array:\n");
    for(int i =0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i =0; i<n;i++)
    {
    printf("%d\t",arr[i]);
    }
    free(arr);
    return 0;
}