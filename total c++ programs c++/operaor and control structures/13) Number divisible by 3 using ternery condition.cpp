#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cout<<"enter the number:";
	cin>>n;
	string result=(n%3==0)?" divisible by 3":" not divisible by 3";
	cout<<result<<endl;
	return 0;
}
