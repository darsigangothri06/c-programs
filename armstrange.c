//armstrong numbers in given range
#include <stdio.h>
#include <stdlib.h>
int arms(int);
int main()
{
    int *q, a, b, i, j=0, k, count=0;
    printf("Enter the range of numbers like '50 100': ");
    scanf("%d %d", &a, &b);
    if(a>b)
        printf("\nfirst number should be greater than second number\n");
    else
    {
        for(i = a; i<= b; i++)
    {
        k = arms(i);
        if(k == 1)
            count++;
    }
    q = (int*)malloc(count*(sizeof(int)));
    for(i = a; i<= b; i++)
    {
        k = arms(i);
        if(k == 1)
            {
                q[j] = i;
                j++;
            }
    }

    printf("\nArmstrong in given range are: \n");
    for(i = 0; i<j; i++ )
        printf("%d\t", q[i]);
    }

    return 0;
}

int arms(int m)
{
    int rem, num, sum=0;
    num = m;
    while(num != 0)
    {
        rem = num%10;
        sum = sum + (rem*rem*rem);
        num = num/10;
    }
    if(sum == m)
        return(1);
    else
        return(0);
}
