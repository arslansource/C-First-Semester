#include <iostream>                  // program for printing a table in manual way
using namespace std;
int main()
{
	int a;                           //we will take a number from user and print table of that number upto 10
	cout<<"Enter your number"<<endl; //user will  see this message on screen and will  input a number
	cin>>a;                          // the number input by user will be stored in this variable i.e a=number entere by user
	cout<<a<<"x"<<1<<"="<<a*1<<endl; //lets suppose a=2 then this syntax will print 2 X 1 = 2 
	cout<<a<<"x"<<2<<"="<<a*2<<endl;
	cout<<a<<"x"<<3<<"="<<a*3<<endl;
	cout<<a<<"x"<<4<<"="<<a*4<<endl;
	cout<<a<<"x"<<5<<"="<<a*5<<endl;
	cout<<a<<"x"<<6<<"="<<a*6<<endl;
	cout<<a<<"x"<<7<<"="<<a*7<<endl;
	cout<<a<<"x"<<8<<"="<<a*8<<endl;
	cout<<a<<"x"<<9<<"="<<a*9<<endl;
	cout<<a<<"x"<<10<<"="<<a*10<<endl;
	return 0;
}
