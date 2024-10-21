#include<iostream>
#include<cmath>
using namespace std;
int main(){

double n,rounded;
cout<<"enter the floating point number:";
cin>>n;
if(n-floor(n)<0.5){
	rounded=floor(n);
	
}else{
	rounded=ceil(n);
	
}cout<<" the nearest number is:"<<rounded<<endl;
return 0;
}
