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
	cout<<" sum of elements in an array:"<<sum<<endl;
	return 0;
}
