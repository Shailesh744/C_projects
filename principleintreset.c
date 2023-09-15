#include<stdio.h>
int main()
{
    int p, r, t;
    printf("enter the rate of interest (in year):");
    scanf("%d", &r);
    printf("enter the principle amount :");
    scanf ("%d", &p);
    printf ("enter time taken (in year) :");
    scanf("%d", &t);

    int PI = p*r*t/100 ;
    printf("here is your simple interest %d \n", PI );
    return 0;
}