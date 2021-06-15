//PROGRAM TO FIND THE GIVEN NUMBER IS PRIME OR PERFECT OR PALINDROME OR ARMSTRONG NUMBER

#include <stdio.h>

void prime(int);
void perfect(int);
void palindrome(int);
void armstrong(int);

void main()
{
    int num;
    printf("Enter a Number\n");
    scanf("%d", &num);

    prime(num);
    perfect(num);
    palindrome(num);
    armstrong(num);
}

void prime(int n)
{
    int i, count = 0;
    for(i = 2; i < (n/2); i++)
    {
        if(n%i == 0)
            {
                count++;
                break;
            }
    }
    if(count == 0)
        printf("\n %d is a prime number ", n);
    else
        printf("\n %d is not a prime number", n);
}

void palindrome(int n)
{
    int a,rev = 0,rem;
    a = n;
    while(a != 0)
    {
        rem = a%10;
        rev = rev*10 + rem ;
        a = a/10;
    }
    if(n == rev)
        printf("\n %d is a palindrome", n);
    else
        printf("\n %d is not palindrome", n);
}

void perfect(int n)
{
    int i, sum = 0;

    for(i = 1; i < n; i++)
    {
        if(n%i == 0)
            sum = sum + i;
    }
    if(sum == n)
        printf("\n %d is a perfect number", n);
    else
        printf("\n %d is not a perfect number", n);
}

void armstrong(int n)
{
    int a, sum = 0, rem;
    a = n;
    while(a != 0)
    {
        rem = a%10;
        sum = sum + (rem * rem * rem);
        a = a/10;
    }
    if(sum == n)
        printf("\n %d is an armstrong number", n);
    else
        printf("\n %d is not an armstrong number", n);
}
