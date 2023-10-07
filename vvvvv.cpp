#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
     v.push_back(2);
      v.push_back(3);
      vector<int>v1=v;
      for(int i=0;i<3;i++){
        cout<<v1[i];
      }
      
      
}

