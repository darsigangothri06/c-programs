//check the entered password is eligible or not
#include <stdio.h>
int main()
{
    char *passw;
    int strsize,i, spl=0, up=0, low=0, dig=0;
    printf("Enter the maximum size of your password");
    scanf("%d", &strsize);

    passw = (char*)malloc(strsize*(sizeof(char)));
    printf("\nEnter string: ");
    fflush(stdin);
    gets(passw);
   if(strlen(passw) > 8)
    {
       for(int i=0;i < strlen(passw);i++)
        {
            if(passw[i]>='a' && passw[i]<='z')
                low++;
            else if(passw[i]>='a'-32 && passw[i]<='z'-32)
                up++;
            else if(passw[i]>='0' && passw[i]<='9')
                dig++;
            else
                spl++;
        }
    }
    else
        printf("Password should be longer than 8\n");

    if(up&&low&&dig&&spl)
    {
         printf("Your password is eligible, because your password contains\n%d uppercase alphabtes\n%d lowercase alphabets\n%d digits\n%d special characters\n", up, low, dig, spl);
    }
    else
    {
        if (up == 0)
            printf("Your password is incorrect because Atleast one uppercase is needed\n");
        else if (low == 0)
            printf("Your password is incorrect because Atleast one lowercase is needed\n");
        else if (dig == 0)
            printf("Your password is incorrect because Atleast one digit is needed\n");
        else
            printf("Your password is incorrect because Atleast one spl char is needed\n");
    }
    return 0;
}

