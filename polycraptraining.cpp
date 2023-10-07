#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
   
    long long int i=0;
    long long int k=0;
    while(true){
         long long int z=0;
        while(k<n){
            if(a[k]>=i+1){
                k++;
                z++;
                break;
                
            }
            else{
                k++;
                
            }
        }
        if(z==1){
            i++;
            continue;
        }
        else{
            break;
        }
        

    }
    cout<<i<<endl;


}