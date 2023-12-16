#include<bits/stdc++.h>
using namespace std;
bool comparison(const pair<long long int, long long int >& a,const pair<long long int,long long int>& b){
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second > b.second);
}
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,m,h;
        cin>>n>>m>>h;
        vector<pair<long long int,long long int>>v;
        long long int x,y;
        for(int i=0;i<n;i++){
            long long int a[m];
            for(int j=0;j<m;j++){
                cin>>a[j];
            }
            sort(a,a+m);
            long long int sum=0;
            long long int points=0;
            long long int penalty=0;
            for(int j=0;j<m;j++){
                sum+=a[j];
                if(sum>h){
                    break;
                }
                points++;
                penalty+=sum;
            }
            v.push_back({points,penalty});
            if(i==0){
                x=points;
                y=penalty;
            }
        }
        long long int c=1;
        sort(v.begin(), v.end(), comparison);
        for(int i=v.size()-1;i>=0;i--){
            if(v[i].first==x and v[i].second==y){
                break;
            }
            else{
                c++;
            }
        }
        cout<<c<<endl;
    }
}