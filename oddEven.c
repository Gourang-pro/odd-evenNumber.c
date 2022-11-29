#include<stdio.h>
#include<conio.h>

int main()
{

    int number;
    printf("ENTER your NUMBER :");
    scanf("%d",&number);

    if (number%2==0)
    {
        printf("\nTHE NUMBER IS EVEN");
    }
    else
    {
        printf("\nTHE NUMBER IS ODD");
    }
    

    return 0;

}