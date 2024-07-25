#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
    int ch;
    stack<int> q;
    
    do{
    cout<<"1.size of the stack"<<endl;
    cout<<"2.insert element into stack"<<endl;
    cout<<"3.delete element from the stack"<<endl;
    cout<<"4.top element of the stack"<<endl;
    cout<<"5.exit"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>ch;
    if(ch==1){
        cout<<"size of element"q.size()<<endl;
}
if(ch==2){
    int i;
    cout<<"enter element"<<endl;
    cin>>i;
    q.push(i);
}
if(ch==3){
    q.pop();
    cout<<"element deleted"<<endl;
}
if(ch==4){
    int s;
    s=q.top();
    cout<<"the front elemet is "<<s<<endl;
}
    }
    while(ch!=5);
    return 0;

}