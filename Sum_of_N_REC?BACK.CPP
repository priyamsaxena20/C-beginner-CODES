#include<iostream>
// back tracking 

using namespace std;
void print(int i,int sum){
	if(i<1){
	
	cout<<sum;
	return;
}
	print(i-1,sum+i);
	
	

}
int main(){
	int n;
	cout<<"enter the no you want sum to be get printed"<<endl;
	
	cin>>n;
	print(n,0);
	
}
