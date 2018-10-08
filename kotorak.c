#include <stdio.h>
#include <string.h>
//typedef struct bobo bobo;

typedef struct bobo
{
    int x;
    float y;
    char g[20];// darcav string tipi
}aa,ar[5];

int main()
{ int i=0;

       ar ar1;
    for(i=0;i<5;i++)
    {
    ar1[i].x=i+1;
    printf("ar1[%i] %i  \n",i,ar1[i].x);
    }
    aa arr[5];
    for(i=0;i<5;i++)
    {
    arr[i].y=i*i;
    printf("arr[%i] %f  \n",i,arr[i].y);
    }
 aa j[10];

 
    printf("string= %s  \n",strcpy(j[0].g,"fhyfdr"));
    return 0;
}