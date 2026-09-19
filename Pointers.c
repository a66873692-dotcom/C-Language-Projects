#include <stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(void)
{
    int x,y;
    printf("Enter 2 numbers:");
    scanf("%d %d",&x,&y);
    printf("Before swapping:\n x=%d\n y=%d ",x,y);
    swap(&x,&y);
    printf("\nAfter swapping:\n x=%d\n y=%d\n ",x,y);
    return 0;
}