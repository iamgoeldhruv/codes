#include<bits/stdc++.h>
using namespace std;
long long int powerof2(long long int i){
        long long int count=0;
        while(i%2==0){
            count++;
            i/=2;
        }
        return count;
    }
int main(){
    
    long long int t;
    cin>>t;
    
    
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        vector<long long int>v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            v.push_back(powerof2(i+1));
        }
        long long int c=0;
        for(int i=0;i<n;i++){
            long long int p=a[i];
            while(true){
                if(p%2==0){
                    p/=2;
                    c++;
                }
                else{
                    break;
                }
            }
        }
        if(c>=n){
            cout<<0<<endl;
            continue;
        }
        long long int diff=n-c;
        sort(v.begin(),v.end());
        long long int c1=0;
        for(int i=n-1;i>=0;i--){
            diff-=v[i];
            c1++;
            if(diff<=0){
                break;
            }
            if(v[i]==0){
                break;
            }

        }
        if(diff<=0){
            cout<<c1<<endl;
        }
        else{
            cout<<-1<<endl;
        }

        

    }
}