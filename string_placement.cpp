#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str="hello, world";
    // string substr="world";
    // size_t found=str.find(substr);
    // if(found!=string::npos)
    string str="welcome to the miet";
    str.replace(3,4,"abcd");
    cout<<str<<endl;
    return 0;
}