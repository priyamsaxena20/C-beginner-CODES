#include<iostream>
using namespace std;
void print(int i,int n){
	if(i>n)
	return ;
	
	cout<<"raj"<<endl;
	print(i+1,n);
}
int main(){
	int n;
	cout<<"enter the time you want the nam eto be printed"<<endl;
	
	cin>>n;
	print(1,n);
	
}
