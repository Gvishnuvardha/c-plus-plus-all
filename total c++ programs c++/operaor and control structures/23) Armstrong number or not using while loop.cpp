#include<iostream>
using namespace std;
int main()
{
	int n,rev,rem,org;
	cout<<"enter the number:";
	cin>>n;
	org=n;
	while(org>0){
		rem=org%10;
		rev=rev+rem*rem*rem;
		org/=10;
	}if(rev==n){
		cout<<" armstrong";
	}else{
		cout<<"not a armstrong";
	}
}
