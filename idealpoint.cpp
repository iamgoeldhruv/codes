#include<iostream>
using namespace std;
 int l1,l2;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int c=0;
        int cp1=0;
        int cp2=0;
        if(n==1){
            int l,r;
            cin>>l>>r;
            if(l==r and l==k){
                cout<<"YES"<<endl;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                continue;
            }
        }
        for(int i=0;i<n;i++){int l,r;
        cin>>l>>r;
       
        if(l>k or r<k){
            c++;
        }
        else{
            if(l<=k-1 and r>=k-1){
                cp1++;
            }
            if(l<=k+1 and r>=k+1){
                cp2++;
            }

        }

        
       }
        
        if(c==n or n-c==cp1 or n-c==cp2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}