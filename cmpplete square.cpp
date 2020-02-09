#include<iostream>
using namespace std;
int square(int num,int z)
{
		for (int i=1;i<=z;i++)
	{
		if (i*i==num)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
int main()
{
	int num,z;
	cout<<"Enter number=";
	cin>>num;
		z=num/2;
	square(num,z);
	if (1)
	{
		cout<<"yes"<<endl;
		
	}
	else
	{
		cout<<"no"<<endl;
	}


	system("pause");
	return 0;
}
