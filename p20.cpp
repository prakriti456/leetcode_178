#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "(]";
    int flag1=0,flag2=0,flag3=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            if(s[i+1]==')'){
                flag1=1;
            }
        }
        if(s[i]=='['){
            if(s[i]==']'){
                flag2=1;
            }
        }
        if(s[i]=='{'){
            if(s[i]='}'){
                flag3=1;
            }
        }
    }
    if(flag1==0&&flag2==0&&flag3==0){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
    return 0;
}