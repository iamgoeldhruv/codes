#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int>v;
        for(int i=1;i<=n;i++){
            long long int x;
            cin>>x;
            v.push_back(x);
        }
        long long int sum1=0;
        long long int sum2=0;
        long long int sum=0;
        map<long long int,int>m;
        int c=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
            if(i%2==0){
                sum1+=v[i];

            }
            else{
                sum2+=v[i];
            }
            if(sum1==sum2){
                c++;
                break;
            }
            if(i>1){
                if(i%2==0){
                    long long int diff=sum1-sum2;
                    if(diff==sum){
                    c++;
                    break;
                }

                }
                else{
                    long long int diff=-sum1+sum2;
                    if(diff==sum){
                    c++;
                    break;
                }
                }
                
                

            }

        }
        if(c>0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


        
    }
}