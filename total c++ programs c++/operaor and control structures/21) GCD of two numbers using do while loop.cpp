#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"enter two numbers:";
	cin>>a>>b;
	do{
		if(b==0)
		break;
		temp=b;
		b=a%b;
		a=temp;
	}while(b!=0);
	cout<<"the gcd of two numbers is:"<<a<<endl;
	return 0;
}
