#include<iostream>
using namespace std;
int main(){
	int i,orig,sum=0;
	cout<<"the the no to check for armstrong"<<endl;
	cin>>i;
	orig=i;
	while(i>0){
		sum=sum+((i%10)*(i%10)*(i%10));
		i=i/10;
	}
	if(sum==orig){
		cout<<"armstrong hai"<<endl;
	}
	else{
		cout<<"nahi hai";
	}

	
	return 0;
}
