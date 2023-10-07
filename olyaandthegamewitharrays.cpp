#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<int>fmin;
        vector<int>smin;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            int a[m];
            for(int j=0;j<m;j++){
                cin>>a[j];
                


            }
            sort(a,a+m);
            fmin.push_back(a[0]);
            smin.push_back(a[1]);
        }
        
        sort(fmin.rbegin(),fmin.rend());
        sort(smin.rbegin(),smin.rend());
        long long int sum=fmin[fmin.size()-1];
        for(int i=0;i<n-1;i++ ){
            sum+=smin[i];
        }
        cout<<sum<<endl;
        



    }
}