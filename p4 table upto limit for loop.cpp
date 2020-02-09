#include <iostream> // in this program user willinput number as well as limit of table e.g table of 5 upto 12 times
using namespace std;
int main()
{
	int a;          // user defined number
	int limit;      // user defined limit of table
	int i=1;
	cout<<"Enter your number for tablle"<<endl;
	cin>>a;
	cout<<"Enter the limit for table"<<endl;
	cin>>limit;
	for(i=1;i<=limit;i++)
	{
		cout<<a<<"x"<<i<<"="<<a*i<<endl;
	}
	return 0;     
}
