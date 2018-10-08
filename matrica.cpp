#include <iostream>
using namespace std;
#define n 3
float a[n][n+1];
void poxel(int i)
{
	int k,j;
	float m;
	for(k=i+1;k<n-1;k++)
		if(a[k][i])
		{
			for(j=0;j<=n;j++)
			{
				m=a[i][j];
				a[i][j]=a[k][j];
				a[k][j]=m;
			}
				break;
			}
		
			for(k=0;k<n;k++)
			{
				for(j=0;j<=n;j++)
					cout<<a[k][j]<<"\t";
			}
			cout<<"\n";

}
int main()
{
	float x[n],p;
	int i,j ,k;
	cout<<"nermucelmatrici gorcakicner@";
	cout<<"\n";
	for(i=0;i<n;i++)
		for(j=0;j<=n;j++)
			cin>>a[i][j];
		cout<<"\n";
		for(k=0;k<n;k++)
			for(i=0;i<n;i++)
			{
				for(j=0;j<=n;j++)
					cout<<a[i][j]<<"\t";
			
			cout<<"\n";
			} cout<<"\n\n";
			for(i=0;i<=n;i++)
			{
				if(a[i][i]==0)
					poxel(i);
				p=a[i][i];
				for(j=0;j<=n;j++)
					a[i][j]/=p;
				for(k=i+1;j<n;k++)
				{
					p=a[k][j];
					for(j=0;j<=n;j++)
						a[k][j]+=a[i][j]*(-p);
				}
				for(k=0;k<n;i++)
			{
				for(j=0;j<=n;j++)
					cout<<a[k][j]<<"\t";
			
			cout<<"\n";
			}
				cout<<"\n";
				if(i==n-2)
					if(a[i][n-1]==0)
						if(a[i][n]!=0)
						{
							cout<<"Hamakarh@ lucum chuni"<<"\n";goto d;
						}
						else
						{
							cout<<"Hamakarh@ uni anverj tvov lucumner"<<"\n";goto d;
						}



			}
			for(i=n-1;i>=0;i--)
			{
				x[i]=a[i][n];
				for(j=n-1;j>=0;j--)
					x[i]-=a[i][j]*x[j];
					cout<<"x"<<i+1<<"="<<x[i]<<"\n";
			}

d:

	return 0;
}