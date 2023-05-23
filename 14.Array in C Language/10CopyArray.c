#include <stdio.h>
int main()
{
    int a[1000], b[1000], n, i;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter the values: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);
    return 0;
}