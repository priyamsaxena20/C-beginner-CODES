#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the no: "<<endl;
	cin>>n;
	cout<<"factor of"<<n<<"are: "<<endl;
	for(int i=1;i<=n;i++){
		if(n%i==0)
		cout<<i<<" ";
		
	}
	return 0;
}
