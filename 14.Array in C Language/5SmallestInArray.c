#include <stdio.h>
#include<limits.h>
int main()
{
    int a[10], i, max= INT_MAX;
    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if(max>a[i])
        max = a[i];
    }
    printf("%d is the smallest of all the numbers",max);
    return 0;
}