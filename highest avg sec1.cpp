#include <iostream>
using namespace std;
char avg(float a,float b,float c,float d,float e,float f)
{
	if(b>a&&b>c&&b>d&&b>e&&b>f)
	{
		return 'b';
	}
	else if(c>b&&c>a&&c>d&&c>e&&c>f)
	{
		return 'c';
	}
	else if(d>b&&d>c&&d>a&&d>e&&d>f)
	{
		return 'd';
	}
	else if(e>b&&e>c&&e>d&&e>a&&e>f)
	{
		return 'e';
	}
	else if(a>b&&a>c&&a>d&&a>e&&a>f)
	{
		return 'a';
	}
	else if(f>b&&f>c&&f>d&&f>e&&f>a)
	{
		return 'f';
	}
}
int main()
{
	int ava,avb,avc,avd,ave,avf;
	cout<<"Enter averages of sections aphabetically one after another:"<<endl;
	cin>>ava>>avb>>avc>>avd>>ave>>avf;
	avg(ava,avb,avc,avd,ave,avf);
	switch(avg(ava,avb,avc,avd,ave,avf))
	{
		case 'a':
		cout<<"A got highest average"<<ava<<endl;
		break;
		case 'b':
		cout<<"B got highest average"<<avb<<endl;
		break;
		case 'c':
		cout<<"C got highest average"<<avc<<endl;
		break;
		case 'd':
		cout<<"D got highest average"<<avd<<endl;
		break;
		case 'e':
		cout<<"E got highest average"<<ave<<endl;
		break;
		case 'f':
		cout<<"F got highest average"<<avf<<endl;
		break;
	}
}

