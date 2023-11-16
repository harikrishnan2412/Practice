//Write  a program to perform array operations like:
//insertion from a specific position, deletion from a specific position,searching&sorting.

#include <stdio.h>

int searching()
{
    int key,flag=0;
    printf("enter the element you want to search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key=A[i])
        {
            printf("the element is found at position %d",A[i]);
        }
        flag=1;
    }
    if(flag==0)
    {
        printf("the element is not found");
    }
    return 0;
}

