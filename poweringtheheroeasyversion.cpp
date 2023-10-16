#include<bits/stdc++.h>
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
        long long int i=0;
        long long int p=0;
        while(i<n){
            if(a[i]==0){
                i++;
            }
            else{
                break;
            }
        }
        
        vector<long long int>v;
        while(i<n){
            
            while(i<n){
                if(a[i]!=0){
                    v.push_back(a[i]);
                    i++;
                }
                else{
                    break;
                }
            }
            sort(v.begin(),v.end());
            long long int c=0;
            while(i<n){
                if(a[i]==0){
                    c++;
                    i++;
                }
                else{
                    break;
                }
            }
            long long int l=v.size();
            while(c>0){
                long long int l=v.size();
                if(l==0){
                    break;
                }
                
                p+=v[l-1];
                c--;
               
                v.pop_back();
               
            }
            

        }
        cout<<p<<endl;
      


    }
}

