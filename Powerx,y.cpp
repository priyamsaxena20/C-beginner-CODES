#include<iostream>
using namespace std;
int main(){
	int x,y,i,pow=1;
	cout<<"enter the value to get printedof x an dy"<<endl;
	cin>>x,y;
	i=1;
	while(i<=y){
		pow=pow*x;
		i+1;
	}
	cout<<"powe value is"<<pow<<endl;
	return 0;
	
}
