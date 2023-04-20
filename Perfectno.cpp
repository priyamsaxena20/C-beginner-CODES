// perfect no
#include<iostream>
using namespace std;
int main(){
	int n,i=1,sum=0;
	cout<<"enter tge no: "<<endl;
	cin>>n;
	while(i<n){
		if(n%i==0){
			sum=sum+i;
			i++;
		}
	}
	if(sum==n){
		cout<<"perfec"<<endl;
		
	}
	else{
		cout<<"not "<<endl;
	}
	return 0;
}
