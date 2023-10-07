#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        int c=0;
        
        long long int n;
        cin>>n;
        unordered_map<int,long long int>m;
         vector<vector<int>>V;
        while(n--){
            long long int k;
            cin>>k;
            int s[k];
           
             vector<int>v;
            for(int i=0;i<k;i++){
               

                cin>>s[i];
                v.push_back(s[i]);


                if(m[s[i]]==0){
                    m[s[i]]++;
                    c++;
                }
            }
            V.push_back(v);

        }
        cout<<c<<endl;
        long long int q=V.size();
        int maxx=0;
        for(int i=0;i<q-1;i++){
             unordered_map<int,long long int>m;
            int z=0;
            
            vector<int>v=V[i];
            for(int x=0;x<v.size();x++){
                if(m[v[x]]==0){
                    m[v[x]]++;
                    z++;
                }
            }
            
            
            for(int j=i+1;j<q;j++){
                if(z<c){
                    int ab=z;
                     unordered_map<int,long long int>m1=m;
                    maxx=max(maxx,z);
                    vector<int>v1=V[j];
                    for(int x=0;x<v1.size();x++){
                        if(m1[v1[x]]==0){
                        m1[v1[x]]++;
                        ab++;
                        }
                    }
                
                
                for(int k=j+1;k<q;j++){
                    if(ab<c){
                         
                         maxx=max(maxx,ab);
                        vector<int>v2=V[k];
                        for(int x=0;x<v2.size();x++){
                            if(m1[v2[x]]==0){
                            m1[v2[x]]++;
                            ab++;
                            }
                    }

                    }
                    else{
                        break;
                    }

                }
                
                }
                else{
                    break;
                }





            }



        }
        cout<<maxx<<endl;
       
        
        
    }
}