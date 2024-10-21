#include<iostream>
using namespace std;
int main()
{
	int i,n,j;
	cout<<"enter the number of rows:";
	cin>>n;
	for(i=1;i<=n;i++){
		cout<<string(n-i,' ');
		for(j=i;j<2*i;j++)
		cout<<j;
		for(j=2*i-2;j>=i;j--)
		cout<<j;
		cout<<endl;
	}
}
