#include<iostream>
using namespace std;
int fac(int n){
	//int ans=1;
	//for(int i=1;i<=x;i++){
//		ans=ans*i;
//	}
//	return ans;
  if(n==0){
  	return 1;
  }	
	return n*fac(n-1);
	
	
}
int main(){
	int x=5;
	int result =fac(5);
	cout<<"fac are"<<result<<endl;
	return 0;
	
}
