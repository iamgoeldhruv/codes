#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
  
        int k;
        cin>>k;
        int a[12];
        int z=0;
        for(int i=0;i<12;i++){
            cin>>a[i];
            z+=a[i];
            
        }
        sort(a,a+12);
        long long int sum=0;
        long long int c=0;
        
        for(int i=11;i>=0;i--){
            if(k==0){
            cout<<0<<endl;
            break;
            
        }
        
            if(k>z){
            cout<<-1<<endl;
            break;
        }
            sum+=a[i];
            c++;
            if(sum>=k){
                cout<<c<<endl;
                break;
            }

        }

    }
