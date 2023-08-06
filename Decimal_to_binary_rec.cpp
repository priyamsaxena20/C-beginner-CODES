#include<iostream>
using namespace std;
void binary(int n){
	if(n==0||n==1){
		cout<<n ;
		//return;
	}
	else{
	
	binary(n/2); 
	cout<<(n%2);
	// state written after recursive function will work in opposite direction of call
}
}
int main(){
	int n;
	cout<<"enter the no"<<endl;
	cin>>n;
	cout<<"the binary of n is"<<endl;
	binary(n);
	return 0;
}
