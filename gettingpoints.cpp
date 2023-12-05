#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int tc;
    cin>>tc;
    while(tc--){
        long double p;
        long long int n,t,l;
        
        long double days=0;
        long double points=0;
        cin>>n>>p>>l>>t;
        if(n<8){
            points+=t+l;
            days++;
            if(points<p){
                long double rem=p-points;
                days+=ceil(rem/l);
                
            }
           long long int www=n-days;
                        cout<<www<<endl;
        }
        else{
            long long int unlocked;
            
            long long int z=n/7;           
            if(n%7==0){
                unlocked=z;
            }
            else{
                unlocked=z+1;
            }
            if(unlocked%2==0){
            long double maxpoints=t*2+l;                    
            long double maxpossible=maxpoints*(unlocked/2);
            if(maxpossible>p){                
                days+=ceil(p/maxpoints);
            }
            else{
                long double rem=p-maxpossible;
                days+=unlocked/2;
                days+=ceil(rem/l);
            }
            long long int www=n-days;
                        cout<<www<<endl;
            }
            else{
                long long int zz=unlocked-1;
                long double maxpoints1=t*2+l;
                long double maxpossible1=maxpoints1*(zz/2);
                if(maxpossible1>=p){
                    days+=ceil(p/maxpoints1);
                    long long int www=n-days;
                        cout<<www<<endl;

                }
                else{
                    days+=zz/2;
                    
                    maxpossible1+=t+l;
                    days++;
                    if(maxpossible1>p){
                       long long int www=n-days;
                        cout<<www<<endl;

                    }
                    else{
                        long double rem=p-maxpossible1;
                        days+=ceil(rem/l);
                        long long int www=n-days;
                        cout<<www<<endl;
                    }
                }
            }
        }
    }
}