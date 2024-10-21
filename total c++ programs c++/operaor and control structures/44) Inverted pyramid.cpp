#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"enter the number of rows:";
	cin>>n;
	for(i=n;i>=1;i--){
		cout<<string(n-i,' ');
		for(j=1;j<=i;j++)
		cout<<j;
		for(j=i-1;j>=1;j--)
		cout<<j;
		cout<<endl;
	}
	return 0;
}
