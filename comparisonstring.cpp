#include<iostream>
#include<vector>
using namespace std;
int Substring(string s)
{
 
    int ans = 1, temp = 1;
 
    
    for (int i = 1; i < s.size(); i++) {
        
        if (s[i] == s[i - 1]) {
            ++temp;
        }
        else {
            ans = max(ans, temp);
            temp = 1;
        }
    }
    ans = max(ans, temp);
 
   
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
    
        
        cout << Substring(s)+1<<endl;

    }
}