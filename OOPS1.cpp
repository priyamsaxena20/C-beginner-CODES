#include<iostream>
using namespace std;
class add{
	int a,b;
	public:
		void getdata(){
			cout<<"enter the no";
			cin>>a>>b;
			
		}
	
	void pushdata(){
		cout<<"the sum is"<<a+b;
	}
};
int main(){
	// creating object
  add aa;
  aa.getdata();
  aa.pushdata();
  return 0;	
	
}
