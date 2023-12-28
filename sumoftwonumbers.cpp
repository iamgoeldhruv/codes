#include<bits/stdc++.h>
using namespace std;
long long int digsum(long long int n){
    long long int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int x=n/2;
        long long int y=n-x;
        while(true){
        if(digsum(x)==digsum(y) or fabs(digsum(x)-digsum(y))==1){
            cout<<x<<" "<<y<<endl;
            break;
        }
        else{
            long long int z=fabs(digsum(x)-digsum(y));
            x-=z/2;
            y+=z/2;
        }
        }
    }
}