#include<iostream>
using namespace std;
int main()
{
	float salary,scale,d;
	char e;
	do
	{
		system("cls");
		cout<<"Enter your salary=";
		cin>>salary;
		cout<<"Enter your scale=";
		cin>>scale;
		if (scale>=14&&scale<=18)
		{
			d=salary/100*30;
			cout<<"Your new salary is="<<d+salary<<endl;
			cout<<"Do u want to continou(y/n)=";
			cin>>e;
		}
		else if(scale<14)
		{
			d=salary/100*50;
			cout<<"Your new salary is="<<d+salary<<endl;
			cout<<"Do u want to continou(y/n)=";
			cin>>e;
		}
		
	}while(e=='y'||e=='Y');
	
  system("pause");
  return 0;
}
