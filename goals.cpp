#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n-1];
        long long int sum=0;
        for(int i=0;i<n-1;i++){
            cin>>a[i];
            sum+=a[i];

        }
        cout<<(0-sum)<<endl;

    }
}