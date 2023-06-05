/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   cout<<"no is"<<n<<endl;
   int count=0;
   for(int i=1;i<=n;i++){
       if(n%i==0)
       count=count++;
   }
   if(  count==2){
     
       cout<<"prime no. hai";
   }
   else{
       cout<<"nahi hai"<<endl;
   }

    return 0;
}
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int check=2;
	int cnt=0;
	for(int i=1;i<=n;i++){
		
		if(n%i==0)
		cnt=cnt++;
	}
	if(check==cnt)
	cout<<"true";
	else
	cout<<"false";
	
}
