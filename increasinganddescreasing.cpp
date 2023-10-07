#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        if((x==y)or y<x){
            cout<<-1<<endl;
            continue;
        }
        if((y-x)<=n-2){
            cout<<-1<<endl;
            continue;
        }
        int sum=(n)*(n-1)/2;
        int a[n-2];
        int summ=0;
        if(x<=y-sum){
            for(int i=1;i<=n-2;i++){
                summ+=i;
                a[i-1]=y-summ;

            }
            cout<<x<<" ";
            for(int i=n-3;i>=0;i--){
                cout<<a[i]<<" ";
            }
            cout<<y;
            cout<<endl;
        }
        else{
             cout<<-1<<endl;
        }
       

    }
}