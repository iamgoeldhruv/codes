#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int freq[26];
    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }

    string s="ugbvngjhngjnbnghhghbghghgbghhgfgghghhhhhhfgfhhhhh";
    for(int i=0;i<s.size();i++)
    {
        freq[s[i]-'a']++;
    }
    char ans;
    int max=0;
    int b=0;
    for(int i=0;i<26;i++)
    {
        if(freq[i]>max)
        {
            max=freq[i];
            b=i;
            ans='a'+i;
        }
    }
    cout<<"frequency is"<<max<<endl;
    cout<<"char is"<<ans;
    return 0;
}

