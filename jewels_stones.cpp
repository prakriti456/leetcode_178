#include<iostream>
#include<string>
using namespace std;
int main(){
    string stones={"aAAbbbb"};
    string jewels={"aA"};
    int count=0;
    for(int i=0;i<jewels.size();i++){
        for(int j=0;j<stones.size();j++){
            if(jewels[i]==stones[j]){
                count++;
            }

        }
    }
    cout<<count;
}