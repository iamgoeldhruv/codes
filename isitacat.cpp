#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--){
   
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long int i=0;
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        while(true){
            if(s[i]=='m' and i<n){
                i++;
            }
            else{
                break;
            }
    
        }
        if(i==0 or i==n){
            cout<<"NO"<<endl;
            continue;
        }
        long long int j=i;
        while(true){
            if(s[j]=='e' and j<n){
                j++;
            }
            else{
                break;
            }
            
        }
        if(j==i or j==n){
                cout<<"NO"<<endl;
            continue;

            }
            long long int k=j;
            while(true){
                if(s[k]=='o' and k<n){
                    k++;
                }
                else{
                    break;

                }
            }
            if(k==j or k==n){
                   cout<<"NO"<<endl;
            continue;

            }
            long long int p=k;
            while(p<n){
                if(s[p]=='w'){
                    p++;
                }
                else{
                    break;
                }
            }
            if(p==k or p<n){
                      cout<<"NO"<<endl;
            continue;
            }
            cout<<"YES"<<endl;
        
    } 


    
       
       
     
}