#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
   while(t--){
    long long n;
    cin>>n;
    long long i;
    int a=1;
    while(n%a==0){
        a++;
    }
    cout<<a-1<<endl;
   }
}