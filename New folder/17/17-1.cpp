#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter 3 numbers ";
	cin>>a>>b>>c;
	
	cout<<"\nFirst integer value = " <<a;
	cout<<"\nSecond integer value = " <<b;
	cout<<"\nThird integer value = " <<c;
	
	int rev1=0;
	while(a>0)
	{
		int rem=a%10;
		rev1=rev1*10+rem;
		a=a/10;
	}
	cout<<"\nFirst reverse integer value = " <<rev1;
	
	int rev2=0;
	while(b>0)
	{
		int rem=b%10;
		rev2=rev2*10+rem;
		b=b/10;
	}
	cout<<"\nSecond reverse integer value = " <<rev2;
	
	int rev3=0;
	while(c>0)
	{
		int rem=c%10;
		rev3=rev3*10+rem;
		c=c/10;
	}
	cout<<"\nThird reverse integer value = " <<rev3;
	
	return 0;
}
