#include<iostream>
// back tracking 1 - n

using namespace std;
void print(int i,int n){
	if(i<1)
	return ;
	print(i-1,n);
	cout<<i<<endl;
	

}
int main(){
	int n;
	cout<<"enter the no you want to be get printed"<<endl;
	
	cin>>n;
	print(n,n);
	
}
