#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        double n;
        cin>>n;
        int a[int(n)];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+int(n));
        int sum1=0;
        int sum2=0;
        if(int(n)%2==0){
            for(int i=0;i<n/2;i++){
            sum1+=a[i];

        }

        }
        else{
        for(int i=0;i<n/2-1;i++){
            sum1+=a[i];

        }}
        for(int i=ceil(n/2);i<n;i++){
            sum2+=a[i];
        }
        cout<<sum2-sum1<<endl;
       
    }
}