#include<iostream>
using namespace std;
int main(){
    int t,d,e,f;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int c=0;
        for(int i=1;i<=x;i++){
            if(i%3!=0){
                d=i;
                for(int j=1;j<=(x-d);j++){
                    if(j%3!=0 && j!=d){
                        e=j;
                        for(int k=1;k<=(x-d-e); k++){
                            if(k%3!=0 && k!=d && k!=e){
                                f=k;
                                if(d+e+f==x){
                                cout<<"yes"<<endl;
                                cout<<d<<" "<<e<<" "<<f<<endl;
                                c=1;}

                                
                            }
                            if(c==1){
                                break;
                            }
                            
                        }
                        
                    }
                    if(c==1){
                            break;
                        }
                   
                    
                }

                
            }
            if(c==1){
                            break;
                        }
           
        }
        if(c==0){
            cout<<"no"<<endl;
        }
    }
}