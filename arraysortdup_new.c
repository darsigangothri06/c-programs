/*You are given two integer arrays A and B. Write a program to create an array D that contains integers from A and B.
Note: The Array should not contain duplicates and the elements are to be sorted
Input:  [3,3,3,4],[5,6,6,7,9,2]
Output: [2,3,4,5,6,7,9] */
#include <stdio.h>

int main()
{
    int a[20], b[20], c[50],d[50], i, j, k=0, count=0,n,m,p=0,temp;
    printf("Enter how many elements in your array: ");
    scanf("%d", &n);
    printf("\nEnter elements of your array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter how many elements in your second array: ");
    scanf("%d", &m);
    printf("\nEnter elements of your array: ");
    for(i = 0; i < m; i++)
        scanf("%d", &b[i]);

//eliminating duplicates and assigning first array elements to new array
    for(i = 0; i<n; i++)
    {
        count = 0;
        for(j = i+1; j<n; j++)
        {
            if(a[j] == a[i])
                   count++;
        }
        if(count == 0)
        {
            c[k] = a[i];
            k++;
        }
    }
//eliminating duplicates and assigning second array elements to new array
        for(i = 0; i<m; i++)
    {
        count = 0;
        for(j = i+1; j<m; j++)
        {
            if(b[j] == b[i])
                   count++;
        }
        if(count == 0)
        {
            c[k] = b[i];
            k++;
        }
    }
//new array to another new to eliminate duplicates
     for(i = 0; i<k; i++)
    {
        count = 0;
        for(j = i+1; j<k; j++)
        {
            if(c[j] == c[i])
                   count++;
        }
        if(count == 0)
        {
            d[p] = c[i];
            p++;
        }
    }
 //sorting new array
  for (i = 0; i < p; ++i)
        {
            for (j = i + 1; j < p; ++j)
            {
                if (d[i] > d[j])
                {
                    temp =  d[i];
                    d[i] = d[j];
                    d[j] = temp;
                }
            }
        }
    printf("\nElements of new array after eliminating duplicates are: ");
    for(i = 0; i < p; i++)
        printf("%d\t", d[i]);
    return 0;
}
