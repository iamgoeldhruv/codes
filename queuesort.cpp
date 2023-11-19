#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        long long int min=10E9;
        long long int index=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<min){
                min=a[i];
                index=i;
            }
        }
        int c=0;
        for(int i=index;i<n-1;i++){
            if(a[i]>a[i+1]){
                c++;
                break;
            }
        }
        if(c==0){
            cout<<index<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
}