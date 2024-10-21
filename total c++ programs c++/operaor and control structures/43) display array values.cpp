#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"enter the number:";
	cin>>n;
	int*arr=new int[n];
	cout<<" enter the elements:";
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<" array values:";
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	delete[]arr;
	}
