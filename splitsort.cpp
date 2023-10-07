#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    unordered_map<int,int>m;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
            m[a[i]]=i;

        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
         int c=0;
        for(int i=2;i<=n;i++){
            if(m[i]-m[i-1]<0){
                c++;
            }



        

    }
    cout<<c<<endl;
        
    }
   


}