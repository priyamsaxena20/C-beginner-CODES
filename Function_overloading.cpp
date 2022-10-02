#include<iostream>
using namespace std;
int add(int num1,int num2){
	return num1+num2;
}
int add(int num1,int num2,int num3){
	return num1+num2+num3;
}
int main(){
	int a=3;
	int b=7;
	int c=8;
	cout<<add(a,b,c);
}
