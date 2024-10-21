#include<iostream>
using namespace std;
int main()
{
	int i,n,t1=0,t2=1,nextTerm;
	cout<<"enter the number of terms:";
	cin>>n;
	cout<<" fibonacci series is:";
	for(i=1;i<=n;i++){
		cout<<t1<<" ";
		nextTerm=t1+t2;
		t1=t2;
		t2=nextTerm;
		
	}
	return 0;
}
