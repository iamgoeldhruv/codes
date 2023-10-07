#include<bits/stdc++.h>

using namespace std;

long long int min(long long int a,long long int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int l,r;
        cin>>l>>r;
        if(l%2==0 and l>2){
            cout<<2<<" "<<l-2<<endl;
            continue;
        }
        if(l%2==0 and l==2){
            if(r>=4){
                cout<<2<<" "<<2<<endl;
                continue;
            }
            else{
                cout<<-1<<endl;
                continue;
            }
        }
        if(l%3==0 and l>3){
            cout<<3<<" "<<l-3<<endl;
            continue;

        }
        if(l%3==0 and l==3){
            if(r>=4){
                cout<<2<<" "<<2<<endl;
                continue;
            }
            else{
                cout<<-1<<endl;
                continue;
            }
        }
        if(l==1){
            if(r>=4){
                cout<<2<<" "<<2<<endl;
                continue;

            }
            else{
                cout<<-1<<endl;
                continue;
            }
        }
        if(r-l>=1){
            cout<<2<<" "<<l-1<<endl;
            continue;
        }
        if(l==r){
            
            long long int k=min(l,9);
            int c=0;
            for(int i=2;i<k;i++){
                if((l-i)%i==0){
                    c++;
                    cout<<i<<" "<<l-i<<endl;
                    break;
                }
            }
            if(c==0){
                cout<<-1<<endl;
            }
            
        }





       
       




    }
}