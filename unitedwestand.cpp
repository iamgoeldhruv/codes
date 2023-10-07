#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a[n];
        int max=0;
        
        for(int i=0;i<n;i++){
            cin>>a[i];
            
            if(a[i]>max){
                max=a[i];
                

            }
            
        }
        
        int c=0;
        
        for(int i=0;i<n;i++){
            if(a[i]==max){
                c++;
            }
        }
        if(c==n){
            cout<<-1<<endl;
            continue;
        }
        else{
            cout<<n-c<<" "<<c<<endl;
        }
        for(int i=0;i<n;i++){
            if(a[i]!=max){
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
        for(int i=0;i<c;i++){
        cout<<max<<" ";
    }
    cout<<endl;
    }
    
}