#include<iostream>
using namespace std;
int main()
{
	int i,n,arr[n],sum=0;
	cout<<"enter the size:";
	cin>>n;
	cout<<"enter the elements:";
	for(i=1;i<=n;i++){
	 cin>>arr[i];
	 sum+=arr[i];
	}
	double average=sum/double(n);
	cout<<" average of elements in an array:"<<average;
}
