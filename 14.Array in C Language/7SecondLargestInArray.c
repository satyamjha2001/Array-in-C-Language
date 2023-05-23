#include <stdio.h>
#include <limits.h>
int main()
{
    int a[10], i, max = INT_MIN, sm = INT_MIN;
    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if (max <= a[i])
        {
            sm = max;
            max = a[i];
        }
        else if (sm <= a[i] &&max >= a[i])
        {
            sm = a[i];
        }
    }
    printf("%d is the second largest number", sm);
    return 0;
}