#include<iostream>
using namespace std;
long long int  gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 

long long int  lcm(long long int a, long long int b)
{
    return (a / gcd(a, b)) * b;
}
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,x,y;
        cin>>n>>x>>y;
        long long int divx=n/x;
        
        long long int divy=n/y;
        long long int both;
        if(x<y)
        {
             both=lcm(x,y);
        }
        else{
             both=lcm(y,x);
        }
        
        
        long long int both1=n/both;
        long long int sum=((n)*(n+1)/2)-((n-divx+both1)*(n-divx+1+both1)/2);
        long long int sum1=(divy-both1)*(divy+1-both1)/2;
        cout<<sum-sum1<<endl;




    
    }

    
}