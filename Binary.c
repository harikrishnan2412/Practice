#include <stdio.h>
void binarysort(int A[50],int size)
{
    int left=0,right = size-1,middle,num;
    printf("enter the number you want to search");
    scanf("%d",&num);
        middle=(left+right)/2;
        if(A[middle]==num)
        {
            printf("the number %d is found at postion %d",num, A[middle]);
        }
        else if(num<A[middle])
        {
            right=middle-1;
        }
        else 
        {
            left=middle+1;
        }
}

int main()
{
    int size,i,A[50];
    printf("enter the size of the array: ");
    scanf("%d",&size);
    printf("enter the elements of the array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }
    binarysort(A,size);
    return 0;
}
    
