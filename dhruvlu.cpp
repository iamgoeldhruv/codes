#include<iostream>
#include<cmath>
#include<iomanip>
#include<ctime>
#include<climits>

using namespace std;
int main()
{
	srand(time(nullptr)) ;
	

	int n;
	cout<<"ENTER THE SIZE OF MATRIX"<<endl;
	cin>>n;
	float a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=rand()%10;
			cout << a[i][j] << endl ;
        }

    }
    float a1[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a1[i][j]=a[i][j];
        }

    }
	float l[n][n];
	int p[n][n];
    cout<<"A IS"<<endl;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<"	";
	
		}
		cout<<endl;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				p[i][j]=1;
			}
			else
			{
				p[i][j]=0;
			}
		}
		
	
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				l[i][j]=1;
			}
			else
			{
				l[i][j]=0;
			}
			
		}
	}
	for(int i=0;i<n-1;i++)
	{
		int x=i;
		float f=0;
		float m=fabs(a[i][i]);
		for(int j=i+1;j<n;j++)
		{
			
			
			if(fabs(a[j][i])>m)
			{
				m=fabs(a[j][i]);
				x=j;
			}
		}
		if(fabs(a[i][i])!=m)
		{
		
		
			for(int k=0;k<n;k++)
			{
				swap(a[i][k],a[x][k]);
				swap(p[i][k],p[x][k]);
			}
		
		}
		for(int z=0;z<i;z++)
		{
			swap(l[i][z],l[x][z]);
		}
		
		
	
		for(int q=i+1;q<n;q++)
		{
	
			
			f=a[q][i]*(1.0/a[i][i]);
			l[q][i]=f;
            a[q][i]=0;
			for(int k=i+1;k<n;k++)
			{
				a[q][k]=a[q][k]-f*a[i][k];
				
			}
			
		}
		
		
	}
	
	cout<<"PERMUTATION MATRIX IS"<<endl;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<p[i][j]<<" ";
		}
		cout<<endl;
	}
		
	cout<<"LOWER TRIANGULAR MATRIX IS"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<l[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"UPPER TRIANGULAR MATRIX IS"<<endl;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
	
		}
		cout<<endl;
	}
	float lu[n][n];
	
	for(int i=0;i<n;i++)
	{
			for(int j=0;j<n;j++)
		{
			lu[i][j]=0;
			for(int k=0;k<n;k++)
			{
				lu[i][j]+=(l[i][k]*a[k][j]);
			}
		}
	}
	cout<<"LU"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<lu[i][j]<<"	";
	
		}
		cout<<endl;
	}
	float pa1[n][n];
	for(int i=0;i<n;i++)
	{
			for(int j=0;j<n;j++)
		{
			pa1[i][j]=0;
			for(int k=0;k<n;k++)
			{
				pa1[i][j]+=(p[i][k]*a1[k][j]);
			}
		}
	}
	cout<<"PA IS"<<endl;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<pa1[i][j]<<"	";
	
		}
		cout<<endl;
	}
	return 0;
}

		
		
		
			
			
				
					
					
					



