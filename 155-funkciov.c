#include <stdio.h>
void ach(int [],int );
#define n 5
#define m 5

int main()

{
    int i,j=0,a1[n],a2[m],a[n+m];
    for(i=0;i<n;i++)
    {
    printf("a1[%i]= ",i);
    scanf("%i",&a1[i]);
    printf("\n");
    }
     for(i=0;i<m;i++)
     {
    printf("a2[%i]= ",i);
    scanf("%i",&a2[i]);
    printf("\n");
     }
    for(i=0;i<(n+m);i++)
    if(i<n)
    a[i]=a1[i];
    else
    {
    a[i]=a2[j];
    j++;
    }
    ach(a,sizeof(a)/sizeof(int));
}
void ach(int arr[],int h)
{

       int i,j,c;
for(i=0;i<h;i++)
    for(j=i+1;j<h;j++)
    if(arr[i]>arr[j])
    {
    c=arr[i];
    arr[i]=arr[j];
    arr[j]=c;
    }

    for(i=0;i<h;i++)
    {
        printf("arr[%i]= %i",i,arr[i]);
        printf("\n");
    }
}
