#include <stdio.h>
int main()
{
    int n,a[1000], i,temp;
    printf("Enter value of array: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int low=0,high=n-1;
    while(low<high)
    {
        temp=a[low];
        a[low]=a[high];
        a[high]=temp;
        low++;high--;
    }
    printf("Elements after reverse: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}