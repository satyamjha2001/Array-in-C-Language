#include <stdio.h>
int main()
{
    int a[10], i, se = 0,so=0;
    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%2==0)
        se += a[i];
        else
        so+= a[i];
    }
    printf("%d is the sum of all the even numbers\n",se);
    printf("%d is the sum of all the odd numbers",so);
    return 0;
}