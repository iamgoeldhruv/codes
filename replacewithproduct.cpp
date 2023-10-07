#include<iostream>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            
        }
        long long int l=-1,r=-1;
        long long int sum=0;
         long double pro=1;
        for(int i=0;i<n;i++){
            if(a[i]!=1){
              
                    l=i;
                    r=i;
                    
                    break;
                
                

            }

            
        }
        if(l==-1){
            cout<<1<<" "<<1<<endl;
            continue;
        }
        long long int diff=0;
        for(int i=l;i<n;i++){
            sum+=a[i];
            pro*=a[i];
            if(sum<pro){
                if(pro-sum>diff){
                    r=i;
                    diff=pro-sum;
                }
               
                

            }
        }
        cout<<l+1<<" "<<r+1<<endl;

        
    }
}