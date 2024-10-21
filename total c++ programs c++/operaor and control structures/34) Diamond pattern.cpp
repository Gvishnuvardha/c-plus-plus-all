#include<iostream>
using namespace std;
int main()
{
	int i,n,j;
	cout<<"enter the number of rows:";
	cin>>n;
	for(i=1;i<n;i++){
		cout<<string(n-i,' ');
		for(j=1;j<=i;j++)
		cout<<'*';
		for(j=i-1;j>=1;j--)
		cout<<'*';
		cout<<endl;
	}
	for(i=n;i>=1;i--){
		cout<<string(n-i,' ');
		for(j=1;j<=i;j++)
		cout<<'*';
		for(j=i-1;j>=1;j--)
		cout<<'*';
		cout<<endl;
	}
	return 0;
}
