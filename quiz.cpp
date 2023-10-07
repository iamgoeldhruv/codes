#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={(2,4),(4,6,9),(9,5)};
    cout<<*(*(arr+2)+2);
    return 0;
}