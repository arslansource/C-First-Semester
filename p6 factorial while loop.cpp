#include <iostream>
using namespace std;
int main()
{
	int a,fac=1;
	int b=1;
	cout<<"Enter your number="<<endl;
	cin>>a;
	while(b<=a)
	{
		fac=fac*b;
		b=b+1;
	}
	cout<<"Factorial of "<<a<<" is "<<fac<<endl;
	return 0;
}
