#include<iostream>
using namespace std;
int main(){
	int n;
	int fact=1;
	cout<< "Enter a Number";
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout << "Factorial of "<<n<<" is "<<fact;
	return 0;
}

