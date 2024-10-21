#include<iostream>
using namespace std;
int main()
{
	int a,b,c,largest;
	cout<<"enter the three numbers:";
	cin>>a>>b>>c;
	largest=(a>b)?((a>c)?a:c):((b>c)?b:c);
	cout<<"largest of among three number is :"<<largest<<endl;
	return 0;
}
