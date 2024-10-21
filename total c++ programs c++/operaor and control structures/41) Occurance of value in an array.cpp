#include<iostream>
using namespace std;
int main()
{
	int i,n=8,count=0,value,arr[]={1,1,2,2,2,3,4,3};
	cout<<"enter the value:";
	cin>>value;
	for(i=0;i<n;i++){
		if(arr[i]==value){
			count++;
		}
	}
	cout<<" occurance is:"<<count<<endl;
	return 0;
}
