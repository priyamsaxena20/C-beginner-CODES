int gcd(int a,int b)
{
	//Write your code here
//	eulidian algorithum
while(a>0 && b>0){
	if(a>b) a=a%b;
	else b=b%a;
}
if(a==0)return b;
else return a;

}

