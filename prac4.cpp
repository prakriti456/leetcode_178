#include<iostream>
#include<string>
using namespace std;
 string choice;
   int c,car=0,bike=0,rickshaw=0;
int main(){
    do{
      
       
 
    cout<<"1. park car"<<endl;
    cout<<"2.park bike"<<endl;
    cout<<"3.park rickshaw"<<endl;
    cout<<"4.exit"<<endl;
       cout<<"enter choice"<<endl;
    cin>>c;
    if(c==1){
        car++;

    }
    if(c==2){
        bike++;
    }
    if(c==3){
        rickshaw++;
    }
    if(c==4){
        break;

    }
    cout<<"do you want to perform again"<<endl;
    cin>>choice;
    

    }
    while(choice=="yes");
    if(choice=="no"){
        cout<<"count of car "<<car<<endl;
        cout<<"count of bike "<<bike<<endl;
        cout<<"count of rickshaw "<<rickshaw<<endl;
    }
    return 0;
}