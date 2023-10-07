#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int z=240-k;
    int sum=0;
    int i=1;
    while(sum<z){
        sum+=5*i;
        i++;
    }
   if(z==sum){
    cout<<min(n,i-1);
   }
   
   
   else if(sum>z){
    cout<<min(n,i-2);
   }
}