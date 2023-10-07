#include <iostream>
#include <cmath>
using namespace std;
int main(){
	//input size
	int n;
	cout<<"Enter the size of the matrix: ";
	cin>>n;
	
	//input matrix A
	float A[4][4];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>A[i][j];
		}
	}
	
	cout<<"Matrix A is: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<A[i][j]<<" ";
		}cout<<endl;
	}
	//input duplicate matrix A
	float a[4][4];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=A[i][j];
		}
	}
	
	//define permutation and lower triangular matrix
	float P[4][4];
    float L[4][4];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				P[i][j]=1;
				L[i][j]=1;
			}else{
				P[i][j]=0;
				L[i][j]=0;
			}
		}
	}
	
	//partial pivoting
	for(int i=0;i<n-1;i++){
		int pivot=i;
		for(int j=i+1;j<n;j++){
			if(fabs(A[j][i])>fabs(A[pivot][i])){
				pivot=j;
			}
		}
		for(int k=0;k<n;k++){
			swap(A[i][k],A[pivot][k]);
			swap(P[i][k],P[pivot][k]);
		}
		for(int k=0;k<i;k++){
			swap(L[i][k],L[pivot][k]);
		}
		
		//forward elimination
		for(int j=i+1;j<n;j++){
			float factor=A[j][i]/A[i][i];
			A[j][i]=0;
			for(int k=i+1;k<n;k++){
				A[j][k]=A[j][k]-factor*A[i][k];
			}
			L[j][i]=factor;
		}
	}
	
	//output
	
	cout<<"Permutation matrix is: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<P[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Lower triangular matrix is: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<L[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Upper triangular matrix is: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//Multiplying L and U
	float LU[4][4];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			float sum=0;
			for(int k=0;k<n;k++){
				sum+=L[i][k]*A[k][j];
				LU[i][j]=sum;
			}
		}
	}
	
	//Multiplying P and A
	float PA[4][4];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			float sum=0;
			for(int k=0;k<n;k++){
				sum+=P[i][k]*a[k][j];
				PA[i][j]=sum;
			}
		}
	}
	
	//output
	cout<<"LU is: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<LU[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"PA is: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<PA[i][j]<<" ";
		}
		cout<<endl;
	}
return 0;	
}
