#include<iostream>
using namespace std;
int main(){
	int i,ori,rev=0;
	cout<<"the the no to check for palimdrome"<<endl;
	cin>>i;
	ori=i;
	while(i>0){
		rev=(rev*10)+i%10;
		i=i/10;
		
	}
	if(rev==ori){
		cout<<"it s a palimdrom,e";
	}
	else{
		cout<<"not palindrome";
	}
	
	return 0;
}
