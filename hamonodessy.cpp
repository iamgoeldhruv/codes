#include<iostream>
using namespace std;
int main(){
     int t;
    cin>>t;
    while(t--){
         int n;
        cin>>n;
         int a[n];
       
        for(int i=0;i<n;i++){
            cin>>a[i];
           

        }
       int p=1;
       int z=a[0];
       for(int i=0;i<n;i++){
        z &=a[i];
        if(z==0){
            if(i==n-1) break;
            p++;
            z=a[i+1];
        }

       }
       if(z!=0)p--;
       p=max(p,0);
       cout<<p<<endl;
}
}