#include <iostream>
using namespace std;
void CR(char character,int symbol)
{
	symbol=int(character);
	if(symbol>=65&&symbol<=90)
	{
		cout<<"Capital Alphabet"<<endl;
	}
	else if(symbol>=97&&symbol<=122)
	{
		cout<<"Small Alphabet"<<endl;
	}
	else
	{
		cout<<"Invalid Input!"<<endl;
	}
}
int main()
{
	int symbol;
	char character;
	cout<<"Enter your Alphabet"<<endl;
	cin>>character;
	CR(character,symbol);
}
