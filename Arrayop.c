#include <stdio.h>

void insert(int A[50], int size)
{
    int pos,num,i;
    if(pos>=size)
    {
    printf("overflow condition");
    }
    else
    {
        printf("enter the position where you want to insert the number");
        scanf("%d",&pos);
        printf("enter the number you want to insert");
        scanf("%d",&num);
        for(i=size;i<=pos-1;i--)
        {
            A[i]=A[i-1];
        }
        A[pos-1]=num;
        size++;
        for(i=0;i<size;i++)
        {
            printf("\n%d",A[i]);
        }
        printf("\n");
    }
}
void delete(int A[50], int size)
{
    int pos,i;
    printf("enter the position where you want to delete: ");
    scanf("%d",&pos);
    if(pos>size)
    {
        printf("can't delete sorry");
    }
    else
    {
        for(i=pos-1;i<size;i++)
        {
            A[i]=A[i+1];
        }
        size--;
        for(i=0;i<size;i++)
        {
            printf("\n%d",A[i]);
        }
        printf("\n");
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
   delete(A,size);
    return 0;
}
