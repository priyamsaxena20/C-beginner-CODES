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
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int dup=n;
	int sum=0;
	while(n>0){
		int ld=n%10;
		sum=sum+(ld*ld*ld);
		n=n/10;
	}
	if(sum==dup)
	cout<<"true";
	else
	cout<<"false";
	
}
