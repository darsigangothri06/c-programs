//factors of a number into an array using DMA
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, j=0, count=0, *a;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i<=n/2 ; i++)
    {
        if (n%i == 0)
            count++;
    }
    a = (int*)malloc((count+1)*(sizeof(int)));

    for(i = 1; i<=n/2 ; i++)
    {
        if (n%i == 0)
        {
            a[j] = i;
            j++;
        }
    }
    for(i = 0; i<j; i++)
        printf("%d\t%d", a[i], n);
    return 0;
}

