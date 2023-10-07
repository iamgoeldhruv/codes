#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double a,b,c;
        cin>>a>>b>>c;
        double z=fabs(a-b);
        double p=z/(2*c);
        cout<<ceil(p)<<endl;
    }

}