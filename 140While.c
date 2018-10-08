#include <stdio.h>

int main()

{
    
float x=-4,y,h=0.5;
    
while(x<=4)
    
{
        
y=2*x*x-5*x-8;
        
x+=h;
       
 printf("x= %f      y= %f \n",x,y);
    
}
    
return 0;

}