#include<iostream>
using namespace std;
int main(){
	int i,n,pos;
	cout<<"enter the size:";
	cin>>n;
	int arr[n];
	cout<<"enter the elements:";
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"enter the postion :";
	cin>>pos;
	for(i=pos-1;i<n-1;i++)
	 arr[i]=arr[i+1];
	 cout<<"after deletion:";
	 for(i=0;i<n-1;i++)
	 cout<<arr[i]<<" "
;
}
