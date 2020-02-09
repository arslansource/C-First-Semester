#include <iostream>
using namespace std;
int calculator(int a,int b,char sym)
{
	switch(sym)
	{
		case '+':
		cout<<a<<"+"<<b<<"="<<a+b<<endl;
		break;
		case '-':
		cout<<a<<"-"<<b<<"="<<a-b<<endl;
		break;
		case '*':
		cout<<a<<"*"<<b<<"="<<a*b<<endl;
		break;
		case '/':
		cout<<a<<"/"<<b<<"="<<a/b<<endl;
		break;
		case '%':
		cout<<a<<"%"<<b<<"="<<a%b<<endl;
		break;
	}
}
int main()
{
	int a,b;
	char sym;
	cout<<"Enter the expression in a+b form:"<<endl;
	cin>>a>>sym>>b;
	calculator(a,b,sym);
}
