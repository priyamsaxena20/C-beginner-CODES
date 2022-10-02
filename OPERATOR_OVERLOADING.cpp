#include<iostream>
using namespace std;
class value{
	private:
		int x;
	public:
	value(){
		x=10;
	}
	void printval(){
		cout<<x<<endl;
	}	
	void operator ++(){
		++x;
	}
};
int main()
{
      value obj;
      obj.printval();
      ++obj;
      obj.printval();// direct x +y to kr skte hn magar jab object ko add krna horta hai to krte hain overlaoding
      
      
     
      return 0;
    
}
