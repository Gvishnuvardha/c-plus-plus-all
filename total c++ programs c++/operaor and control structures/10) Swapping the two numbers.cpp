#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the number1:";
	cin>>a;
	cout<<"enter the number2:";
	cin>>b;
	cout<<"before swapping: a="<< a <<" ,b="<< b <<endl;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<"after swapping: a="<< a <<" ,b="<< b <<endl;
	return 0;
}
