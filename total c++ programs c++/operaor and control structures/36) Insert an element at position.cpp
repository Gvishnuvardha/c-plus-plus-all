#include<iostream>
using namespace std;
int main(){
	int i,n,pos,x;
	cout<<"enter the size of array:";
	cin>>n;
	int arr[n+1];
	cout<<"enter the elements:";
	for(i=0;i<n;i++)
		cin>>arr[i];
	
	cout<<"enter the positon:";
	cin>>pos;
	cout<<"enter the positon to insert element:";
	cin>>x;
	for(i=n;i>=pos;i--)
		arr[i]=arr[i-1];
		arr[pos-1]=x;
	
	cout<<"after insertion:";
	for(i=0;i<=n;i++)
	
		cout<<arr[i]<<" ";
	
	
}
