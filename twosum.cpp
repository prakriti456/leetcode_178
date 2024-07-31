#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1 ,-1 ,-1, 2 ,2};
    int target=1;
    	for(int i=0;i<arr.size();i++){
		for(int j=i+1;j<arr.size();j++){
			if(arr[i]+arr[j]==target){
				cout<<arr[i]<<" "<<arr[j]<<endl;
			}
	
		}
	} 
}