#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
       
        int n=a.size();
        int p=b.size();
        int www;
        vector<char>v;
        
        int c=0;
        int z=0;
        int q=0;
        for(int i=0;i<n;i++){
            char x=a[i];
            int isfind=0;
            
            int k=max(c,z);
            int f;
            for(int j=k;j<p;j++){
                if(b[j]==x){
                    
                    isfind=1;
                    f=j;
                   
                    
                  
                }
                
               
               
            }
            if(isfind==1){
                if(f==c){
                        v.push_back(x);
                    }
                    else{
                       www=v.size();
                  if(www>=1){
                    if(v[www-1]!='*'){
                        v.push_back('*');
                    }
                  }
                  else{
                    v.push_back('*');

                  }
                        v.push_back(x);
                       
                    }
                     c=f+1;
                    

                }
             if(isfind==0){
                  www=v.size();
                  if(www>=1){
                    if(v[www-1]!='*'){
                        v.push_back('*');
                    }
                  }
                  else{
                    v.push_back('*');

                  }
                   
                  
                }
            


            
           
            
            

        }
        if(a[n-1]==b[c-1]){
            if(c<p){
               www=v.size();
                  if(www>=1){
                    if(v[www-1]!='*'){
                        v.push_back('*');
                    }
                  }
                  else{
                    v.push_back('*');

                  }
                
            }
            

        }
        else{
            
                  www=v.size();
                  if(www>=1){
                    if(v[www-1]!='*'){
                        v.push_back('*');
                    }
                  }
                  else{
                    v.push_back('*');

                  }
        }
        
        int stc=0;
        int cts=0;
        for(int i=0;i<v.size();i++){
            if(v[i]=='*'){
                stc++;

            }
            else{
                cts++;
            }
        }
        if(stc<=cts){
            cout<<"YES"<<endl;
            for(int i=0;i<v.size();i++){
                cout<<v[i];
            }
            cout<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
        
        
           