#include<iostream>
using namespace std;
int main()
{
	int n,org,rev=0,rem;
	cout<<"enter the number:";
	cin>>n;
	org=n;
	if(n<0){
		n=-n;
		org=-org;
		
	}while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}if(rev==org){
		cout<<"palindrome"<<endl;
	}else{
		cout<<"not a palindrome"<<endl;
	}
	return 0;
}
