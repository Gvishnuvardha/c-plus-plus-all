#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,add,sub,mul,div,mod;
	cout<<"enter the number1:";
	cin>>a;
	cout<<"enter the number2:";
	cin>>b;
	add=a+b;
	sub=a-b;
	mul=a*b;
	if(b!=0){
		cout<<" div:"<<a/b<<endl;
		cout<<"mod:"<<fmod(a,b)<<endl;
	}else{
		cout<<"div: undefined(divison by 0)"<<endl;
		cout<<"mod: undefined(divison by 0)"<<endl;
		
	}
	cout<<"add:"<<add<<endl;
	cout<<"sub:"<<sub<<endl;
	cout<<"mul:"<<mul<<endl;
	return 0;
}
