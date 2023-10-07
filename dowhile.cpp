#include<iostream>
using namespace std;
int main()
{
    int n=7,m=1,i=1;
    do{
        m*=i;
        cout<<m;
        i++;
    }while(i<=n);
    return 0;


}

