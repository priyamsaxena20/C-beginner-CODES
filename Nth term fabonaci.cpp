#include<iostream>
using namespace std;
int solve(int n){
	// base cae
     if(n<=1){
     	return n;
	 }
	return solve(n-1)+ solve(n-2);
	
}
int main(){
	int n;
	cin>>n;
    cout<<	solve(n);
	return 0;
}
