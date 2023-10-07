// #include <iostream>
// #include <string>

// int main() {
//     std::string str = "Hello, World!";
//     int index = 7;
//     int integer = 7;

//     // Convert the integer to a string
//     std::string integerStr = std::to_string(integer);

//     // Replace the character at the specified index with the corresponding character from the integer string
//     str[index] = integerStr[0];

//     std::cout << str << std::endl;

//     return 0;
// }


#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    int c;
    while(t--){
        string x;
        cin>>x;
        for(int i=0;i<x.size();i++){
            int n=(int)x[i]-(int)'0';
            if(n>=5){
                c=i;
                break;
        }
    }
    if(c==0){
        cout<<1;
        for(int i=0;i<x.size();i++){
            cout<<0;
        }
        cout<<endl;
        continue;
    }
    for(int i=c;i>=0;i--){
        int m = (int)x[i]-(int)'0';
        if(m>=5){
            for(int j=c;j<x.length();j++){
                x[j]='0';
            }
            int t=(int)x[i-1]-(int)'0';
            t=t+1;
            string integerStr = to_string(t);
            x[i-1] = integerStr[0];
        }
    }
    cout<<x<<endl;
    

 
    }


}

