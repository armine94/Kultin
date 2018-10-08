#include <stdio.h>
void maximum(int,int);
//hamematutyun
int main()
{
    int c,d;
    printf("Nermucel tiv@\t");
    scanf("%i",&c);
    printf("Nermucel tiv@\t");
    scanf("%i",&d);
    maximum(c,d);    
    return 0;
}
void maximum(int a,int b)
{
    int max;
    if(a>b)
    printf(">\n");
    else if(a<b)
    printf("<\n");
    else 
    printf("=\n");
}