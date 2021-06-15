// find a string from an array of strings which has a given substring and put all the string into a new array

#include <stdio.h>
#include<string.h>
int main()
{
    char a[5][20] = { "hello", "baba", "ababc", "hell", "abcabc"}, k[5][20], j=0, i;
    char subs[20];
    char *ptr;
    printf("Assumed array of strings are\n");
    printf("%s\t%s\t%s\t%s\t%s\n", a[0], a[1], a[2], a[3], a[4]);
    printf("Enter a substring: ");
    scanf("%s", subs);

    for(i =0; i< (sizeof(a)/20) ; i++ )
    {
        ptr = strstr(a[i], subs);
        if(ptr != 0)
        {
            strcpy(k[j], a[i]);
            j++;
        }
    }
    for(i = 0; i<j; i++)
    {
        printf("%s\t", k[i]);
    }
    return 0;
}






