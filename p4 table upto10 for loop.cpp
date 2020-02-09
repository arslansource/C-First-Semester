#include <iostream>      // table of a user defined number upto 10 using loops
using namespace std;     // with loops the code would be short and easy to use
int main()
{
	int a;               // variable to store number by user
	int i=0;              // another variable which is equal to zero at the stage
	cout<<"Enter your number"<<endl;    //whatever is in double quotes would be printed as it is
	cin>>a;
	for(i=0;i<=10;i++)  // use of for loop  //int i =o// then the loop will check if is smaller than 10 or not  
	{                   // if the value of i is smaller than 10 then lines inside the loop (i.e cout<<...) will be executed
		cout<<a<<"x"<<i<<"="<<a*i<<endl; //then in the end i++ will be executed which means increment of 1 in value of i
	}                  // it means after once for loop is executed the value of i will become 1 then after second time 2
	return 0;          // when i=11 then the for loop will not be executed as the condition i<=10 becomes false and then control
	                   //of program will jump to line 13
}
