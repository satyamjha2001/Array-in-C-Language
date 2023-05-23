#include <stdio.h>
int main()
{
    int a[10], i, sum = 0;
    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("%.2f is the average of all the numbers",sum/10.0);
    return 0;
}