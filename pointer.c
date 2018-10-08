#include <stdio.h>
#include <stdlib.h>

typedef struct bo bo;
struct bo
{
    int x;
    float y;
};
int main()
{
 bo * p = (bo*)malloc(sizeof(bo));
 printf("x= %i, y=%f\n",(*p).x,(*p).y);
 printf("x= %i, y=%f\n",p->x,p->y);
    return 0;
}
