#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int q;
    cin>>q;
    long long int c=0;
     vector<pair<long long int,long long int>>v1;
   

   
    for(int k=1;k<=q;k++){
        char a;
        cin>>a;
        long long int l,r;
        cin>>l>>r;
       
        pair<long long int,long long int>p;
        p.first=l;
        p.second=r;
       
        for(int i=0;i<v1.size();i++){
            long long int a1=v1[i].first;
            long long int b=v1[i].second;
          
        
                if((a1<=l and b>=l) or (a1<=r and b>=r)  or (l<a1 and r>b)){
                    continue;
                    
                }
                else{
                    if(a=='+'){
                        c++;
                    }
                    else{
                        c--;
                    }
                    
               
                    }
            
            
            

        }
        if(a=='-'){
           auto it = find(v1.begin(), v1.end(),p);
            if (it != v1.end()) {
            v1.erase(it);
            }
        }
        if(a=='+'){
             v1.push_back(p);
            
        }
       
        if(c>0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }





        
    }
}