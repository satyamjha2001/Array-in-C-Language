#include <stdio.h>
#include <limits.h>
int main()
{
    int a[10], i, min = INT_MAX, sm = INT_MAX;
    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if (min >= a[i])
        {
            sm = min;
            min = a[i];
        }
        else if (sm >= a[i] && min <= a[i])
        {
            sm = a[i];
        }
    }
    printf("%d is the second smallest number", sm);
    return 0;
}