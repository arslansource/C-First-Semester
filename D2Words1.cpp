#include <iostream>
using namespace std;
int D2W(int num)
{
	int num1,num2,num3,num4,num5;
	int A,B,C,D,E,F;
	if(num<100000||num>999999)
	{
		cout<<"Invalid input"<<endl;
		cout<<"It's not a six digit number"<<endl;
	}
	else
	{
		A=num/100000;
		num1=num%100000;
		switch(A)
		{
			case 0: cout<<"ZERO"<<endl; break;
			case 1: cout<<"ONE"<<endl; break;
			case 2: cout<<"TWO"<<endl; break;
			case 3: cout<<"THREE"<<endl; break;
			case 4: cout<<"FOUR"<<endl; break;
			case 5: cout<<"FIVE"<<endl; break;
			case 6: cout<<"SIX"<<endl; break;
			case 7: cout<<"SEVEN"<<endl; break;
			case 8: cout<<"EIGHT"<<endl; break;
			case 9: cout<<"NINE"<<endl; break;
		}
		B=num1/10000;
		num2=num1%10000;
		switch(B)
		{
			case 0: cout<<"ZERO"<<endl; break;
			case 1: cout<<"ONE"<<endl; break;
			case 2: cout<<"TWO"<<endl; break;
			case 3: cout<<"THREE"<<endl; break;
			case 4: cout<<"FOUR"<<endl; break;
			case 5: cout<<"FIVE"<<endl; break;
			case 6: cout<<"SIX"<<endl; break;
			case 7: cout<<"SEVEN"<<endl; break;
			case 8: cout<<"EIGHT"<<endl; break;
			case 9: cout<<"NINE"<<endl; break;
		}
		C=num2/1000;
		num3=num2%1000;
		switch(C)
		{
			case 0: cout<<"ZERO"<<endl; break;
			case 1: cout<<"ONE"<<endl; break;
			case 2: cout<<"TWO"<<endl; break;
			case 3: cout<<"THREE"<<endl; break;
			case 4: cout<<"FOUR"<<endl; break;
			case 5: cout<<"FIVE"<<endl; break;
			case 6: cout<<"SIX"<<endl; break;
			case 7: cout<<"SEVEN"<<endl; break;
			case 8: cout<<"EIGHT"<<endl; break;
			case 9: cout<<"NINE"<<endl; break;
		}
		D=num3/100;
		num4=num3%100;
		switch(D)
		{
			case 0: cout<<"ZERO"<<endl; break;
			case 1: cout<<"ONE"<<endl; break;
			case 2: cout<<"TWO"<<endl; break;
			case 3: cout<<"THREE"<<endl; break;
			case 4: cout<<"FOUR"<<endl; break;
			case 5: cout<<"FIVE"<<endl; break;
			case 6: cout<<"SIX"<<endl; break;
			case 7: cout<<"SEVEN"<<endl; break;
			case 8: cout<<"EIGHT"<<endl; break;
			case 9: cout<<"NINE"<<endl; break;
		}
		E=num4/10;
		num5=num4%10;
		switch(E)
		{
			case 0: cout<<"ZERO"<<endl; break;
			case 1: cout<<"ONE"<<endl; break;
			case 2: cout<<"TWO"<<endl; break;
			case 3: cout<<"THREE"<<endl; break;
			case 4: cout<<"FOUR"<<endl; break;
			case 5: cout<<"FIVE"<<endl; break;
			case 6: cout<<"SIX"<<endl; break;
			case 7: cout<<"SEVEN"<<endl; break;
			case 8: cout<<"EIGHT"<<endl; break;
			case 9: cout<<"NINE"<<endl; break;
		}
		F=num5/1;
		switch(F)
		{
			case 0: cout<<"ZERO"<<endl; break;
			case 1: cout<<"ONE"<<endl; break;
			case 2: cout<<"TWO"<<endl; break;
			case 3: cout<<"THREE"<<endl; break;
			case 4: cout<<"FOUR"<<endl; break;
			case 5: cout<<"FIVE"<<endl; break;
			case 6: cout<<"SIX"<<endl; break;
			case 7: cout<<"SEVEN"<<endl; break;
			case 8: cout<<"EIGHT"<<endl; break;
			case 9: cout<<"NINE"<<endl; break;
		}
	}
}
int main()
{
	int number1;
	cout<<"Enter a six digit number"<<endl;
	cin>>number1;
	D2W(number1);
}
