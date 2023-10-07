#include<iostream>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        
        long long int a[n];
        long long int sum1=0;
        long long int sum2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){
                sum1++;
            }
            if(a[i]>1){
                sum2+=a[i]-1;
            }

        }
        if(sum2>=sum1 && n!=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}