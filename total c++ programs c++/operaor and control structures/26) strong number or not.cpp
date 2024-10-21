#include<iostream>
using namespace std;
int main()
{
	int i,n,rem,fact,sum=0,temp;
	cout<<"enter the number:";
	cin>>n;
	temp=n;
	while(temp>0){
	rem=temp%10;
	fact=1;
	for(i=1;i<=rem;i++){
		fact=fact*i;
	}
	sum+=fact;
	temp/=10;
	}if(n==sum){
		cout<<"strong number";
		
	}else{
		cout<<" not strong number";
	}
}
