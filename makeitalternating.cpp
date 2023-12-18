#include<bits/stdc++.h>
using namespace std;
long long int m=998244353;
long long  int factorial(long long int n)
{
    if (n == 0)
        return 1;
    return ((n%m) *(factorial(n - 1)%m)%m);
}

int main(){
    long long int t;
    cin>>t;
   
    while(t--){
        
        string s;
        cin>>s;
        long long int n;
        n=s.length();
        long long int count=0;
        long long int maxx=0;
        long long int z=1;
        long long int ww=1;
        vector<long long int>v;
        for(int i=0;i<n;i++){

            if(s[i]==s[i+1]){
                count++;
            }
            else{
                maxx+=count;
                v.push_back(count+1);
                count=0;
            }
           
        }
         maxx+=count;
            v.push_back(count+1);
            count=0;
        long long int pro=1;
        for(int i=0;i<v.size();i++){
            pro*=(v[i]%m);
             pro%=m;
        }
       
        cout<<maxx<<" "<<((factorial(maxx)%m)*pro)%m<<endl;




    }
}