//taking a string as input and reversing every word and printing the string
#include <stdio.h>
#include<string.h>
int main()
{
    int i=0, j = -1, k = 0, count = 0;
    char a[50], b[50];
    gets(a);
    for(i=0;a[i];i++)
        {
            if(a[i] == ' ')
                count++;
        }
        i=0;
        for(k = 0; k <= count; k++)
        {
            for(i; i < strlen(a); i++)
            {
                j++;
                if(a[i] == ' ')
                    break;
                if(a[i] == '\0')
                    break;
                b[j] = a[i];
            }
            i=i+1;
            printf("%s ",(strrev(b)));
            j = -1;
        }
    return 0;
}

