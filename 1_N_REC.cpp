#include<iostream>
using namespace std;
void print(int i,int n){
	if(i>n)
	return ;
	
	cout<<i<<endl;
	print(i+1,n);
}
int main(){
	int n;
	cout<<"enter the no you want to be get printed"<<endl;
	
	cin>>n;
	print(1,n);
	
}
