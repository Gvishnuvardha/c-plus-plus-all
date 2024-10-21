#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cout<<"enter the string:";
	cin>>str;
	bool ispalindrome=true;
	for(int i=0,j=str.length()-1;i<j;i++,j--){
		if(str[i]!=str[j]){
			ispalindrome=false;
			break;		
		}	
		}
		if(ispalindrome){
			cout<<"\""<<str<<"\"is a palindrome";	
		}else{
			cout<<"\""<<str<<"\"is not a palindrome";
			
		}
		return 0;
	}
