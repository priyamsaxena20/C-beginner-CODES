// strong no 145 1!+4!+5!=145 ya original 
#include<iostream>
using namespace std;
int main(){
	int n,sum=0,d,temp,fact;
	cout<<"enter a no: ";
	cin>>n;
	temp=n;
	while(n!=0){
		d=n%10;
		fact =1;
		for(int i=1;i<=d;i++){
			fact=fact*i;
		}
		
		sum=sum+fact;
		n=n/10;
		
	}
	                  
	if(sum==temp){
		cout<<"ye to strong no hai"<<endl;
	}
	else{
		cout<<"nahi hai";
	}
	return 0;
}
