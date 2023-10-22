#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
       
        int a=1;
        long long int sum=0;
        long long int diff;
        int b;
        for(int j=0;j<4;j++){
            b=int(s[j])-int('0');
           
            if(b!=0){
                diff=fabs(b-a);
                sum+=diff+1;
                a=b;

            }

            if(b==0){
               diff=(10-a);
                sum+=diff+1;
                a=10;

            }
            // cout<<diff<<endl;
            // cout<<sum<<endl;


        }
        cout<<sum<<endl;

    }
}