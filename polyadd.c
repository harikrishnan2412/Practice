#include<stdio.h>

struct poly
{
    int coeff;
    int expo;
}p1[10],p2[10],p3[10];

void read(struct poly p[10])
{
    printf("enter total number of terms in the polynomial: ");
    scanf("%d",&t1);
    
    printf("enter the coef and exponent in descending order: ");
    for(i=0;i<t1;i++)
    {
        printf("enter the coef: ");
        scanf("%d",&p[i].coeff);
        printf("enter the expo: ");
        scanf("%d",&p[i].expo);
    }
}
