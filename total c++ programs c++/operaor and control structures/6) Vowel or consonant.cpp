#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter an alphabet:";
	cin>>ch;
	char lowerch=tolower(ch);
	if(lowerch=='a'||lowerch=='e'||lowerch=='i'||lowerch=='o'||lowerch=='u'){
		cout<< ch << " is a vowel"<<endl;
		
	}
	else{
		cout<< ch << " is a consonant"<<endl;
		
	}
	return 0;
}
