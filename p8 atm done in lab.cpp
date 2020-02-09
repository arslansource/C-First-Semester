#include<iostream> // includes statements like if, if else,if else if, do while,goto.
using namespace std; //pincode is 4498 if you enter wrong password more than 3 times the account gets freezed
int main()           // to understand statements consult youtube(bucky c++ or vikas panday)
{
	int pin,amount,balance=500000,deposit,press,tries,count=0;
	char Press;
	cout<<"___________WELCOME TO STATE BANK OF PAKISTAN___________"<<endl;
	do
	{
		
	cout<<"Enter a 4 Code Pin: ";
	cin>>pin;
	if(pin==4498)
	{
		menu:
		cout<<"\t_________________________________________"<<endl;
		cout<<"\t* 1. You want to Withdraw your Balance\t*"<<endl;
		cout<<"\t* \n ";
		cout<<"\t* 2. You want to Check Your Balance   \t*"<<endl;
		cout<<"\t* \n ";
		cout<<"\t* 3. You want to deposit Money        \t*"<<endl;
		cout<<"\t* \n ";
		cout<<"\t_________________________________________"<<endl;
		cout<<"Enter a Number which you want to continue: ";
		cin>>press;
	 	if(press==1)
		{
		amount:
		withdraw:	
		cout<<"Enter Your amount which you want to withdraw: ";
		cin>>amount;
		if(amount<balance&&amount%500==0)
		{
			cout<<"Withdrawl Successful!"<<endl;
			cout<<"Your amount is "<<amount<<" ruppees."<<endl;
			cout<<"Your Remaining Balance is "<<balance-amount<<" Rupees"<<endl;
			cout<<"Thanks for visiting us!"<<endl;
		}
		else
		{
			if(amount%500!=0)
			{
				cout<<"Please Enter an amount which is Greater or equal to 500 or multiples of 500"<<endl;
				cout<<"You want to Re-enter your Amount?(Y/N): ";
				cin>>Press;
			
				if(Press=='Y'||Press=='y')
				{
					goto amount;
				}
			else
			{
				cout<<"Thanks for visiting us!"<<endl;
			}
			}
			if(amount>=balance)
			{
				cout<<"You have insuficient Balance."<<endl;
				cout<<"Thanks for visiting us!"<<endl;
			}
		}
		}
		if(press==2)
		{
			cout<<"Your Account Balance is "<<balance<<endl;
			cout<<"You want to withdraw your balance? (Y/N): ";
			cin>>Press;
			if(Press=='y'||Press=='Y')
			{
				goto withdraw;
			}
			else 
			{
				cout<<"Thanks for visiting us!"<<endl;
			}
		}
			else
			{
				ReenterDeposit:
				cout<<"Enter Your Balance, Which You want to Deposit: ";
				cin>>deposit;
				if(deposit%500==0)
				{
				cout<<"Enter Your Pin Code Again for confirmation: ";
				cin>>pin;
				if(pin==4498)
				{
					cout<<"Your new balance is "<<deposit+balance<<" ruppees."<<endl;
					cout<<"Thanks for visiting us!"<<endl;
					cout<<"You want to Select another option? (Y/N)"<<endl;
					cin>>Press;
					if(Press=='Y'||Press=='y')
					{
						goto menu;
					}
					else
					{
						cout<<"Thanks for visiting us!";
					}
				}
				}
				else
				{
					cout<<"Please Enter an amount which is Greater or equal to 500 or multiples of 500"<<endl;
					cout<<"You want to re-enter your Deposit cash? (Y/N) ";
					cin>>Press;
					if(Press=='Y'||Press=='y')
					{
						goto ReenterDeposit;
					}
					else
					{
						cout<<"Thanks To Visit Mao-bank"<<endl;
					}
				}
			}
	}
	else
	{
		cout<<"Your Pin Code is InCorrect"<<endl;
		cout<<"You want to rentre your Pin? (Y/N)";
		cin>>Press;
		if(Press=='Y'||Press=='y')
		{
			count++;
		}
	}
	}while(count<3);
	cout<<"Your account is blocked";
	
	return 0;	
}
