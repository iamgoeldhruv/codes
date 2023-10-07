#include<iostream>
#include<vector>
#include<cmath>
#include<ctime>
#include<climits>
#include<iomanip>
using namespace std;
void lu(vector<vector<float>>&a,vector<vector<float>>&a1,vector<vector<int>>&p,vector<vector<float>>&l,vector<vector<float>>&a2,vector<float>&b,int N1,int N2,int n)
{
    for(int i=0;i<n;i++)
    {
    
       vector<float>temp;

    
        for(int j=0;j<n;j++)
        {
            
            temp.push_back(rand()%N1);
			
        }
        a.push_back(temp);
		a1.push_back(temp);
		a2.push_back(temp);


    }
	
    
	
    cout<<"A IS"<<endl;
	
	for(int i=0;i<a.size();i++)
	{
		for(int j=0;j<a[i].size();j++)
		{
            cout<<a[i][j]<<"	";
			
	
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		b.push_back(rand()%N2);

	}
	cout<<"THE MATRIX B IS"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
    
	
	for(int i=0;i<n;i++)
	{
        vector<int>temp1;
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				temp1.push_back(1);
			}
			else
			{
				temp1.push_back(0);
			}
            
		}
        p.push_back(temp1);
		
	
	}
    
		
    
	for(int i=0;i<n;i++)
	{
        vector<float>temp2;
		for(int j=0;j<n;j++)
        
		{
            
			if(i==j)
			{
				temp2.push_back(1);
			}
			else
			{
				temp2.push_back(0);
			}
        
            
			
		}
        l.push_back(temp2);
        
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
            for(int z=0;z<i;z++)
		    {
			    swap(l[i][z],l[x][z]);
		    }
		
		}
		
		
		
	
		for(int q=i+1;q<n;q++)
		{
	
			
			f=a[q][i]/(a[i][i]);
			l[q][i]=f;
            a[q][i]=0;
			for(int k=i+1;k<n;k++)
			{
				a[q][k]=a[q][k]-f*a[i][k];
				
			}
			
		}
    }
		
		
	
	
	cout<<"PERMUTATION MATRIX IS"<<endl;
	
	for(int i=0;i<p.size();i++)
	{
		for(int j=0;j<p[i].size();j++)
		{
			cout<<p[i][j]<<" ";
		}
		cout<<endl;
	}
		
	cout<<"LOWER TRIANGULAR MATRIX IS"<<endl;
	for(int i=0;i<l.size();i++)
	{
		for(int j=0;j<l[i].size();j++)
		{
			cout<<l[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"UPPER TRIANGULAR MATRIX IS"<<endl;
	
	for(int i=0;i<a.size();i++)
	{
		for(int j=0;j<a[i].size();j++)
		{
			cout<<a[i][j]<<" ";
	
		}
		cout<<endl;
	}
    return;
    
}
void elimination(vector<vector<float>>&a1,vector<float>&b)
{

	for(int i=0;i<a1.size()-1;i++)
	{
		float l=0;
		int z=i;
		float max=fabs(a1[i][i]);
		for(int j=i+1;j<a1.size();j++)
		{
			if(fabs(a1[j][i])>max)
			{
				max=fabs(a1[j][i]);
				z=j;
			}
		}
		if(z!=i)
		{
			for(int j=0;j<a1.size();j++)
			{
				swap(a1[i][j],a1[z][j]);
			}
			swap(b[i],b[z]);
		}
		
	
		for(int q=i+1;q<a1.size();q++)
		{
	
			
			l=a1[q][i]/(a1[i][i]);
			
            a1[q][i]=0;
			for(int k=i+1;k<a1.size();k++)
			{
				a1[q][k]=a1[q][k]-l*a1[i][k];
				
			}
			
		}
    }
	cout<<"MATRIX A AFTER PERFORMING ELIMINATON AND PIVOTING IS"<<endl;
	for(int m=0;m<a1.size();m++)
	{
		for(int j=0;j<a1[m].size();j++)
		{
        cout<<a1[m][j]<<"	";
			
	
		}
		cout<<endl;
	}
}
void backsubstitution(vector<vector<float>>&a1,vector<float>b,vector<float>&w,int n)
{
	float sum1=0;

	
	w[n-1]=b[n-1]/a1[n-1][n-1];
	
	for(int i=n-2;i>=0;i--)
	{

		sum1=b[i];
	
		for(int j=i+1;j<n;j++)
		{
			sum1=sum1-a1[i][j]*w[j];
		}
		w[i]=sum1/a1[i][i];
		

	}

	
 	cout<<"THE SOLUTION VECTOR IS"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"value of x"<<i+1<<w[i]<<endl;
	}
}
void error(vector<vector<float>>&a1,vector<float>b,vector<float>&w,int n)

{
	float summ=0;
	
	float e[n];
	
	for(int i=0;i<a1.size();i++)
	 
	{
		float s=0;
		for(int j=0;j<a1.size();j++)

		{
			s+=a1[i][j]*w[j];

		}
		e[i]=fabs(b[i]-s);
		summ+=e[i];


	}
	

	cout<<"THE SUM OF ERRORS IS"<<summ<<endl;
}
void mul(vector<vector<float>>&a1,vector<vector<float>>&a2,vector<vector<float>>l,vector<vector<int>>&p,int n)
{
	float lu[n][n];
	
	for(int i=0;i<n;i++)
	{
			for(int j=0;j<n;j++)
		{
			lu[i][j]=0;
			for(int k=0;k<n;k++)
			{
				lu[i][j]+=(l[i][k]*a1[k][j]);
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
				pa1[i][j]+=(p[i][k]*a2[k][j]);
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
}








	


int main()
{
	cout<<setprecision(5);
    srand(time(nullptr));
    

    int N1;
    cout<<"enter the value of n1"<<endl;
    cin>>N1;
    int N2;
    cout<<"enter the value of n2"<<endl;
    cin>>N2;
	int n;
    cout<<"enter the size of matrix"<<endl;
    cin>>n;
    vector<vector<float>>a;
	vector<vector<float>>a1;
	vector<vector<float>>a2;
    vector<vector<int>>p;
    vector<vector<float>>l;
    vector<float>b;
	vector<float>w(n);
    
    cout<<"CREATING RANDOM MATRIX AND PERFORMING LU DECOMPOSTION"<<endl;
    lu(a,a1,p,l,a2,b,N1,N2,n);
	
	cout<<"FORWARD ELIMINATION"<<endl;
	elimination(a1,b);
	cout<<"PERFORMING back substitution"<<endl;
	
	backsubstitution(a1,b,w,n);
	cout<<"CALCULATING SUM OF ERROR"<<endl;
	
	error(a1,b,w,n);
	cout<<"PERFORMING MULTIPLICATION"<<endl;
	mul(a1,a2,l,p,n);

	return 0;


	
	




}

