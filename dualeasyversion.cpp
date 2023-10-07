#include <bits/stdc++.h> 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int max=-20;
        int index=0;
        int c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(max<a[i]){
                max=a[i];
                index=i;
            }
            if((a[i])<0){
                c++;
            }
            
        
            
        }


        
        
    }
}