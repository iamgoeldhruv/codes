#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        long long int x1,y1;
        cin>>x1>>y1;
        long long int x2,y2;
        cin>>x2>>y2;
        int c=0;
        // long long int w=a*a+b*b;
        // long long int y=pow((x1-x2),2)+pow((y1-y2),2);
        // long long int z=y/4;
        // if(w==z){
        //     cout<<1<<endl;
        // }
        // if(w>z){
        //     cout<<2<<endl;
        // }
        // if(w<z){
        //     cout<<0<<endl;
        // }
        map<pair<long long int,long long int>,int>m;
        pair<long long int,long long int>p1;
        p1.first=(x1+a);
        p1.second=(y1+b);
        m[p1]++;
        pair<long long int,long long int>p2;
        p2.first=(x1-a);
        p2.second=(y1-b);
        m[p2]++;
        pair<long long int,long long int>p3;
        p3.first=(x1-a);
        p3.second=(y1+b);
        m[p3]++;
        pair<long long int,long long int>p4;
        p4.first=(x1+a);
        p4.second=(y1-b);
        m[p4]++;
        // pair<long long int,long long int>p4;
        // p4.first=(x1+a);
        // p4.second=(y1-b);
        // m[p4]++;
        // pair<long long int,long long int>p4;
        // p4.first=(x1+b);
        // p4.second=(y1+a);
        // m[p4]++;
        // pair<long long int,long long int>p4;
        // p4.first=(x1+a);
        // p4.second=(y1-b);
        // m[p4]++;
         p4.first=(x1+b);
        p4.second=(y1+a);
        m[p4]++;
        
        p4.first=(x1-b);
        p4.second=(y1-a);
        m[p4]++;
       
        p4.first=(x1+b);
        p4.second=(y1-a);
        m[p4]++;
      
        p4.first=(x1-b);
        p4.second=(y1+a);
        m[p4]++;
        
        p4.first=(x2+a);
        p4.second=(y2+b);
        if(m[p4]>0){
            c++;
            m[p4]=0;
        }
      
        p4.first=(x2-a);
        p4.second=(y2-b);
        if(m[p4]>0){
            c++;
            m[p4]=0;
        }
       
        p4.first=(x2+a);
        p4.second=(y2-b);
        if(m[p4]>0){
            c++;
            m[p4]=0;
        }
     
        p4.first=(x2-a);
        p4.second=(y2+b);
        if(m[p4]>0){
            c++;
            m[p4]=0;
        }
      
        p4.first=(x2+b);
        p4.second=(y2+a);
        if(m[p4]>0){
            c++;
            m[p4]=0;
        }
     
        p4.first=(x2-b);
        p4.second=(y2-a);
        if(m[p4]>0){
            c++;
            m[p4]=0;
        }
        
        p4.first=(x2+b);
        p4.second=(y2-a);
        if(m[p4]>0){
            c++;
            m[p4]=0;
        }
      
        p4.first=(x2-b);
        p4.second=(y2+a);
        if(m[p4]>0){
            c++;
            m[p4]=0;
        }
        cout<<c<<endl;
        
        


    }
}