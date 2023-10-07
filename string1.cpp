#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1="5863";
    string s2;
    int j=0;
    while(j<s1.size())
    {
        char a;
        for(int i=j;i<s1.size();i++)
        {
            char a=s1[j];
            if(s1[i]>a)
            {
                a=s1[i];
            }

        }
        s1+=a;
        j++;
    }
    cout<<s2;
    return 0;
}


    
        
        
    

    
    
    

