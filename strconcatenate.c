#include <stdio.h>
#include <string.h>

int main()
{
    char *a, *b, *c;
    int j,k, l, len, m,i;
    //allocating sizes for 2 strings and reading string
    printf("Enter max size of 1st string: ");
    scanf("%d", &j);
    a = (char*)malloc(j*sizeof(char));
    printf("\nEnter your string: ");
    fflush(stdin);
    gets(a);
    printf("\nEnter max size of 2nd string: ");
    scanf("%d", &k);
    b = (char*)malloc(k*sizeof(char));
    printf("\nEnter your string: ");
    fflush(stdin);
    gets(b);
    l = j+k;       //allocating size for new string
    c = (char*)malloc(l*(sizeof(char)));
    strcpy(c,a);   //copying the first string into new string
    m = 0;
    for(i = strlen(a); b[m] != 0; i++)
    {
        c[i] = b[m];      //copying the 2nd string to new string
        m++;
    }
    printf("\nNew Concatenated string is \"%s\"", c);
}
