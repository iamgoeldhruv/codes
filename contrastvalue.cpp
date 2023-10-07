#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n==1){
            long long int x;
            cin>>x;
            cout<<1<<endl;
            continue;
        }
        long long int a[n];
        long long int sum=0;
         long long int c=0;
        unordered_map<long long int,long long int>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i>0){
                if(a[i]==a[i-1]){
                    c++;

                    continue;
                }
                if(a[i]>a[i-1]){
                    m[a[i]]++;
                    m[a[i-1]]--;

                }
                if(a[i]<a[i-1]){
                    m[a[i]]--;
                    m[a[i-1]]++;

                }
            }
        }
        if(c==n-1){
            cout<<1<<endl;
            continue;

        }
        for(auto it:m){
            // cout<<it.first<< " " <<it.second<<endl;
            if(it.second==1 or it.second==-1 ){
                sum+=fabs(it.second);

            } 
            if(it.second>1 or it.second<-1 ){
                if(it.second%2==0){
                    sum+=fabs(it.second/2);
                }
                else{
                    sum+=fabs(it.second);

                }
            }
           
           
        }
        cout<<sum<<endl;
       

    }
}