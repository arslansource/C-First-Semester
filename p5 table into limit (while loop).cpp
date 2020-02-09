#include <iostream>
using namespace std;
int main()
{
	int a,b,c=1;
	cout<<"Enter your number="<<endl;
	cin>>a;
	cout<<"Limit="<<endl;
	cin>>b;
	while(c<=b)
	{
		cout<<a<<"x"<<c<<"="<<a*c<<endl;
		c=c+1;
	}
	return 0;
}
