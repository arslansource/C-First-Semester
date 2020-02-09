#include<iostream>
using namespace std;
int main()

{
	int english,urdu,math,physics,pak;
	int avg;
	int total;
	float a = 4.0;
	float b = 3.5;
	float c = 3.0;
	float d = 2.5;
	float e = 2.0;
	float egpa,ugpa,mgpa,pgpa,sgpa;
	float cgpa;
	char eg ;
	char ud ;
	char mt ;
	char ph ;
	char pa ;
	char input;
	
	do{
		cout<<"  Enter Your English Marks...  ";
		cin>>  english;
		cout<<"  Enter Your Urdu Marks...  ";
		cin>>urdu;
		cout<<"  Enter Your Math Marks...  ";
		cin>>math;
		cout<<"  Enter Your Physics Marks...  ";
		cin>>physics;
		cout<<"  Enter Your Pakstudies Marks...  ";
		cin>>pak;
	if(english>=90 && english<=100){
		eg = 'A';
		egpa = a;
	}
		else if(english<=89 && english>=80){
		eg = 'B';
		egpa = a;
	}
		else if(english<=79 && english>=70){
		eg = 'C';
		egpa = b;
		}
		else if(english<=69 && english>=60){
		eg = 'D';
		egpa = c;
	}
		else if(english<=59 && english>=50)
		{
		eg = 'E';
		egpa = d;
	}	else if(english<=49 && english>=30)
	{
		eg = 'F';
		egpa = e;
	}
		else{
		cout<<"  Invaild Marks"<<endl;
	}
	
		if(urdu>=90 && urdu<=100){
			ud = 'A';
			ugpa=a;
		}
			else if(urdu<=89 && urdu>=80){
			ud = 'B';
			ugpa=a;
		}
			else if(urdu<=79 && urdu>=70){
			ud = 'C';
			ugpa=b;
			}
			else if(urdu<=69 && urdu>=60){
			ud = 'D';
			ugpa=c;
		}
			else if(urdu<=59 && urdu>=50)
			{
			ud = 'E';
			ugpa=d;
		}	else if(urdu<=49 && urdu>=30)
		{
			ud = 'F';
			ugpa=e;
		}
			else{
			cout<<"  Invaild Marks"<<endl;
		}
			
		if(math>=90 && math<=100){
			mt = 'A';
			mgpa=a;
		}
			else if(math<=89 && math>=80){
			mt = 'B';
			mgpa=a;
		}
			else if(math<=79 && math>=70){
			mt = 'C';
			mgpa=b;
			}
			else if(math<=69 && math>=60){
			mt = 'D';
			mgpa=c;
		}
			else if(math<=59 && math>=50)
			{
			mt = 'E';
			mgpa=d;
		}	else if(math<=49 && math>=30)
		{
			mt = 'F';
			mgpa=e;
		}
			else{
			cout<<"  Invaild Marks"<<endl;
		}
		
		if(physics>=90 && physics<=100){
			ph = 'A';
			pgpa=a;
		}
			else if(physics<=89 && physics>=80){
			ph = 'B';
			pgpa=a;
		}
			else if(physics<=79 && physics>=70){
			ph = 'C';
			pgpa=b;
			}
			else if(physics<=69 && physics>=60){
			ph = 'D';
			pgpa=c;
		}
			else if(physics<=59 && physics>=50)
			{
			ph = 'E';
			pgpa=d;
		}	else if(physics<=49 && physics>=30)
		{
			ph = 'F';
			pgpa=e;
		}
			else{
			cout<<"  Invaild Marks"<<endl;
		}
				
		if(pak>=90 && pak<=100){
			pa = 'A';
			sgpa=a;
		}
			else if(pak<=89 && pak>=80){
			pa = 'B';
			sgpa=a;
			
		}
			else if(pak<=79 && pak>=70){
			pa = 'C';
			sgpa=b;}
			else if(pak<=69 && pak>=60){
			pa = 'D';
			sgpa=c;
		}
			else if(pak<=59 && pak>=50)
			{
			pa = 'E';
			sgpa=d;
		}	else if(pak<=49 && pak>=30)
		{
			pa = 'F';
			sgpa=e;
		}
			else{
			cout<<"  Invaild Marks"<<endl;
		}
		cout<<"\n";
		cout<<"\n";
		
		cout<<"  |   Subject   |   Grade   |   GPA   |"<<endl;
		cout<<"  |   English   "<<"|     "<<eg<<"     "<<"|    "<<egpa<<"    |"<<endl;
		cout<<"  |     Urdu    "<<"|     "<<ud<<"     "<<"|    "<<ugpa<<"    |"<<endl;
		cout<<"  |     Math    "<<"|     "<<mt<<"     "<<"|    "<<mgpa<<"    |"<<endl;
		cout<<"  |   Physics   "<<"|     "<<ph<<"     "<<"|    "<<pgpa<<"    |"<<endl;
		cout<<"  |  Pakstudies "<<"|     "<<pa<<"     "<<"|    "<<sgpa<<"    |"<<endl;
		
		cout<<"\n";
		cout<<"\n";
		total=english+urdu+math+physics+pak;
		cgpa=(egpa+ugpa+mgpa+pgpa+sgpa)/5;
		
		avg=total/5;
		if(total<=500 && total>=350){
			cout<<"  Congratulation You Passed The Exams And Score "<<total<<" Out of 500 \n  Your External Grade Is A \n  Your Average Is "
			<<avg<<"\n  Your CGPA Is "<<cgpa<<endl;
		}
		else if(total<=349 && total>=250){
			cout<<"  Congratulation You Are Passed The Exams And Score "<<total<<" Out of 500 \n  Your External Grade Is B \n  Your Average Is "
			<<avg<<"\n  Your CGPA Is "<<cgpa<<endl;
		}
		else{
			cout<<"  Sorry! You are Fail in the Exams And Score "<<total<<" Out of 500 \n  Your External Grade Is F \n  Your Average Is "
			<<avg<< "\n  Your CGPA Is  "<<cgpa<<endl;
		}
				
	cout<<"\n  Do You Want To Check Anoter Result? (Y/N)  ";
	cin>>input;
	
	
}
		while(input == 'Y' || input == 'y' );
	return 0;
	
}
