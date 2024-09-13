#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the value of x\n");
    scanf("%d",&y);
    printf("enter the value of y\n");
    scanf("%d",&x);
    if(x>0)
    {
        if(y>0)
        printf("x and y are more than zero\n");

    }else 
    if(y<0)
    printf("x and y are less than or equal to zero");
}