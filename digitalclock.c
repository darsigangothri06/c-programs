//digital clock
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour, minute, second;
    int d = 1; //Delay of 1000ms
    printf("Set time : \n");
    scanf("%d %d %d", &hour, &minute, &second);
    if(hour>12 || minute>60 || second>60)
    {
        printf("ERROR ! \n");
        exit(0);
    }
    while(1)
    {
        second++;
        if(second>59)
        {
            minute++;
            second=0;
        }
        if(minute>59)
        {
            hour++;
            minute=0;
        }
        if(hour>12)
        {
            hour=1;
        }
        printf("\n %02d:%02d:%02d",hour,minute,second);
        printf("\n Clock :");
        sleep(d);//this function slows down the while loop
        system("clear");//this clears the screen
    }
}

