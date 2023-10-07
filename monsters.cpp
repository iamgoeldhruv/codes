#include<bits/stdc++.h>
#include<vector>

using namespace std;
int main(){
    long long int t;
    cin>>t;
   
    while(t--){
        long long int n,k;
        cin>>n>>k;
         pair<int,int>a[n];
        
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%k==0){
                x=k;

            }
            else{
                x=x%k;
            }
            a[i].first=-x;
            a[i].second=i+1;
           
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            cout<<a[i].second<<" ";

        }
        cout<<endl;



       



    }
    return 0;

}