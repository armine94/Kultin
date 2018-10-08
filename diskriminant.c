#include <stdio.h>
#include <math.h>
void printResult(int,int,int);
double deskriminant(int,int,int);
int main()
{	int i,s=0;
	int k=0;
	/*int l;
	int m;
	scanf("%i",&k);
	scanf("%i",&l);
	scanf("%i",&m);
	printResult(k,l,m);*/
	for (i=0; i<=10; i++) {
	s=s+i;
	printf("i = %i ",i);
	if (i==5) {
	continue;
	}
	else if (i==8)
	{
	break;
	}}
	do {
	printf("k=%i\n",k);
	k++;
	}while (k<7);


	printf("\ns = %i \n",s);
	return 0;
}

double deskriminant(int param1,int param2,int param3){ 	
	return param2*param2 - 4*param1*param3;	

}

void printResult(int a,int b,int c) {
	
	double d;
	float x1;
	float x2;	
	d = deskriminant(a,b,c);	
	if ( d < 0 ) {
		printf("irakan lucum chuni");
	} else if(d == 0) {
		x1 = -b/2*a;
		x2 = -b/2*a;
		printf("x1 = %f \nx2 = %f ",x1,x2);
	} else {
		x1 = (-b+sqrt(d))/(2*a);
		x2 = (-b-sqrt(d))/(2*a);
		printf("x1=%f\n",x1);
		printf("x2=%f",x2);
	}

}
