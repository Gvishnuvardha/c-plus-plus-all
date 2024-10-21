#include<iostream>
using namespace std;
int main()
{
	int i,arr1[]={1,2,3},arr2[]={4,5,6},n1=sizeof(arr1)/sizeof(arr1[0]),n2=sizeof(arr2)/sizeof(arr2[0]),merge[n1+n2];
	for(i=0;i<n1;i++)
		merge[i]=arr1[i];
		
	
	for(i=0;i<n2;i++)
		merge[n1+i]=arr2[i];
	
	cout<<"merged arrays:";
	for(i=0;i<n1+n2;i++)
		cout<<merge[i]<<" ";
	
}
