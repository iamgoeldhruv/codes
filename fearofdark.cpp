#include<bits/stdc++.h>
using namespace std;

 
int main(){
    long long int t;
    cin>>t;
    while(t--){
       long double x,y;
        cin>>x>>y;
        long double ax,ay;
        cin>>ax>>ay;
        long double bx,by;
        cin>>bx>>by;
        long double d1=min(sqrt(ax*ax+ay*ay),sqrt(bx*bx+by*by));
        long double d2=min(sqrt(pow((ax-x),2)+pow((ay-y),2)),sqrt(pow((bx-x),2)+pow((by-y),2)));
        long double r=max(d1,d2);
        long double d=sqrt(pow((ax-bx),2)+pow((ay-by),2));
        long double p=min(sqrt(x*+y*y),sqrt(x*x+y*y));
        cout<<d<<endl;
        cout<<r<<endl;
        cout<<d1<<endl;
        cout<<d2<<endl;

        
         if(d<=2*r){
            cout<<setprecision(21)<<min(r,d/2)<<endl;
        }
        else{
             cout<<setprecision(21)<<d/2<<endl;
        }




    }
}