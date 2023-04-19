#include<iostream>
using namespace std;
int main(){ 
	int n,sum=0;
	cout<<"enter the no"<<endl;
	cin>>n;
	while(n>0){
		sum=(sum*10)+n%10;
		n=n/10;
	}
	
	cout<<"the sum of digits is"<<sum<<endl;
	return 0;
}
