#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"enter the numbers:";
	cin>>n;
	if(n<0){
		n=-n;
	}while(n>0){
		sum+=n%10;
		n/=10;
	}
	cout<<"the sum of all digits is:"<<sum<<endl;
	return 0;
}
