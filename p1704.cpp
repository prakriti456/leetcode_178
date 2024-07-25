#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="book";
    int count=0;
    int count2=0;
    for(int i=0;i<s.size()/2;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }
    }
       for(int i=s.size()/2;i<s.size();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count2++;
        }
    }
    if(count==count2){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}