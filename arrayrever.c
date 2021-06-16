#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr_main, i, k, temp, num,j;
    //allocating memory to array
    printf("Enter the no:of elements of your array: ");
    scanf("%d", &num);
    arr_main = (int*)malloc(num*sizeof(int));
    printf("\nEnter the elements of your array: ");
    for(i = 0; i<num; i++)
        scanf("%d", &arr_main[i]);
    //reversing first half of the array
    for(i = 0, k = (num/2 - 1); i < k; i++, k--)
    {
        temp = arr_main[i];
        arr_main[i] = arr_main[k];
        arr_main[k] = temp;
    }
    if(num%2 == 0)
        j = num/2;
    else
        j = num/2 + 1;
    //reversing second half of the array
    for(i = j, k = (num-1); i<k; i++, k--)
    {
        temp = arr_main[i];
        arr_main[i] = arr_main[k];
        arr_main[k] = temp;
    }
    for(i = 0; i<num; i++)
        printf("%d\t", arr_main[i]);

    return 0;
}
