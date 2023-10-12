#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long double n;
        cin>>n;
        long long int k=(-1+sqrt(1+8*n))/2;
        long long int diff=n-((k)*(k+1)/2);
        cout<<k+diff+1<<endl;
    }
}

       
        


        

