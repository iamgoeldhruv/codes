#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++){
            cin>>a[i];
        }
        sort(a,a+2*n);
        int c=0;
        for(int i=1;i<n;i++){
            c+=a[i]-a[i-1];
        }
        for(int i=n+1;i<2*n;i++){
            c+=a[i]-a[i-1];
        }
        int i=0;
        int j=n;
        cout<<c<<endl;
        while(i<n){
            cout<<a[i]<<" "<<a[j]<<endl;
            i++;
            j++;
        }
    }

}