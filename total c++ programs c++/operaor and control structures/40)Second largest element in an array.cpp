#include<iostream>
using namespace std;
int main(){
	int i,n=5,arr[]={i,2,3,4,5};
	int first=arr[0],second=-1;
	for(i=1;i<n;i++){
		if(arr[i]>first){
		
		second=first;
		first=arr[i];
		}else if(arr[i]>second&&arr[i]!=first)
		second=arr[i];
	}
	cout<<"second largest is:"<<second;
	return 0;
}
