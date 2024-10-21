#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int i,arr[]={1,2,3,4,5},n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	reverse(arr,arr+n);
	cout<<endl;
	cout<<"reversed array:";
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
		
	}
	return 0;
}
