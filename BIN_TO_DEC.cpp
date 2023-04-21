// binary to decimal conversion
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,temp,rem,sum=0,i=0;
	cout<<"enter the binary no: "<<endl;
	cin>>n;
	temp=n;
	while(temp>0){
		rem=temp%10;
		sum=sum+rem*pow(2,i);
		i++;
		temp=temp/10;	
		
	}
	cout<<"decimal no is "<<sum<<endl;
	return 0;
}
