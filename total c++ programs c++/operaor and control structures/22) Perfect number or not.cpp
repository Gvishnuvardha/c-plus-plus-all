#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"enter the number:";
	cin>>n;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}if(n==sum){
		cout<<"perfect number";
	}else{
		cout<<"not a perfect number";
	}
	return 0;
}
