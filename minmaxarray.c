//finding min and max of an array and thier sum and reverse sum
#include <stdio.h>
int rev(int);
int main()
{
    int a[20], min, max, n, i, orgsum, sum;
    printf("Enter the size of the array(<=20): ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    min = max = a[0];
    for(i = 0; i<n; i++)
    {
        if (max<a[i])
            max = a[i];
    }
     for(i = 0; i<n; i++)
    {
        if (min>a[i])
            min = a[i];
    }
    printf("Min is %d and Max is %d", min, max);
    orgsum = min+max;
    printf("\nOrg sum is %d", orgsum);
    if(orgsum>10)
        sum = rev(orgsum);
    else
        sum = orgsum;
    printf("\nREVSUM is %d", sum);
    return 0;
}

int rev(int a)
{
    int num=a, revr, rem;
    while(num>0)
    {
        rem = num%10;
        revr = revr*10 + rem;
        num /= 10;
    }
    return(revr);
}



