#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char arr[6]="hello";
    int j=0,b=0;
    for(int i=0;i<5;i++)
    {
        int a=0;
        
        while(j<s.size())
        {
            if(s[j]==arr[i])
            {
                a+=1;
                b++;
                j++;
                break;
                

            }
            j++;
        }
        if(a==1)
        {
            continue;
        }
        else
        {
            break;
        }


    }
    if(b==5)
    {
        cout<<"YES";

    }
    else
    {
        cout<<"NO";
    }
    return 0;
}


    