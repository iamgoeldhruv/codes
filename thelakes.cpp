#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        long long int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int c=0;
                int x=a[i][j];
                if(i!=0){
                    if(a[i-1][j]!=0){
                        c++;
                    }
                }
                if(i!=n-1){
                    if(a[i+1][j]!=0){
                        c++;
                    }
                }
                if(j!=0){
                    if(a[i][j-1]!=0){
                        c++;
                    }
                }
                if(j!=m-1){
                    if(a[i][j+1]!=0){
                        c++;
                    }
                }
                if(c>0){
                    sum+=a[i][j];
                }

            }
        }
        cout<<sum<<endl;
    }
}