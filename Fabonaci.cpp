#include<iostream>
using namespace std;
int main(){
	cout<<"enter the term"<<endl;
	int n,x,y,z;
	cin>>n;
	x=0;
	y=1;
	z=0;
	while(z<=n){
		cout<<"\n"<<z<<endl;
		x=y;
		y=z;
		z=x+y;
	}
	return 0;
}
