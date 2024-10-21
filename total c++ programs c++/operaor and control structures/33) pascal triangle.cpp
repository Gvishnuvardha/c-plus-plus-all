#include<iostream>
using namespace std;
int main()
{
	int i,j,n,coef=1;
	cout<<"enter the number :";
	cin>>n;
	for(i=0;i<=n;i++){
		cout<<string(n-i-1,' ');
		for(j=0;j<=i;j++){
			if(j==0||i==0)
			coef=1;
			else 
			coef=coef*(i-j+1)/j;
			cout<<coef<<" ";
		}
		cout<<endl;
	}
}
