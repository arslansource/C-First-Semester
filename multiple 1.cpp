#include<iostream>
using namespace std;
void MON(int a,int b)
{
	if(a%b==0)
	{
		cout<<a<<" is multple of "<<b<<endl;
	}
	else if(b%a==0)
	{
		cout<<b<<" is multple of "<<a<<endl;
	}
	else
	{
		cout<<"Neither a nor b is multiplle of eachother"<<endl;
	}
}

int main()
{
	int a,b;
	cout<<"Enter num a and num b"<<endl;
	cin>>a>>b;
	MON(a,b);
}

