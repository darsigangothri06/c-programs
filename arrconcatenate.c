#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array_1, *array_2, *arr_con, r, s, t,i,z=0;
    //reading elements into array
    printf("Enter the no:of elements of first array: ");
    scanf("%d", &r);
    array_1 = (int*)malloc(r*(sizeof(int)));
    printf("\nEnter the elements of your array: ");
    for(i= 0; i < r; i++ )
        scanf("%d", &array_1[i]);
    printf("\nEnter the no:of elements of second array: ");
    scanf("%d", &s);
    array_2 = (int*)malloc(s*(sizeof(int)));
    printf("\nEnter the elements of your array: ");
    for(i= 0; i < s; i++ )
        scanf("%d", &array_2[i]);
    //allocating size for new array
    t = r+s;
    arr_con = (int*)malloc(t*(sizeof(int)));
    for(i = 0; i < r; i++)
        arr_con[i] = array_1[i];  //passign firsst array to new array
    for(i = r; i < t; i++)
    {
        arr_con[i] = array_2[z];  //passing second array to new array
        z++;
    }
    for(i= 0; i < t; i++ )
        printf("%d\t", arr_con[i]);  //printing new array
    return 0;
}
