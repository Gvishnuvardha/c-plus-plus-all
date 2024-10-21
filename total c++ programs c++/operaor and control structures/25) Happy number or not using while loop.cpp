#include<iostream>
using namespace std;
int main()
{
	int n,digit,sum=0;
	cout<<"enter the number:";
	cin>>n;
	while(n>0||sum>9){
		if(n==0){
			n=sum;
			sum=0;
		}else{
			digit=n%10;
			sum=digit*digit;
			n/=10;
		}
	}if(sum==1){
		cout<<"happy number";
	}else{
		cout<<" not a happy number";
	}
}
