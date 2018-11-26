#include <iostream>
#include <string>
#include <algorithm>
#include <Windows.h>
using namespace std;

typedef struct num
{
	int sor, ded;
};
char c;
	struct num numst;
	struct num numnd;

void input()
{
	cout<<"Enter first fraction (contain two numbers, divided and divisor): ";
	cin>>numst.ded>>numst.sor;
	cout<<"Enter operator: ";
	cin>>c;
	cout<<"Enter second fraction (contain two numbers, divided and divisor): ";
	cin>>numnd.ded>>numnd.sor;
	if((numst.sor==0||numnd.sor==0)||(c=='/'&&numnd.ded==0))
	{
		cout<<"\n\t\t\tWrong input!!!!";
		Sleep(1000);
		system("cls");
		input();
	}
}

void calc()
{
	input();
	if(c=='+')
	{
		if((numst.ded*numnd.sor+numst.sor*numnd.ded)%(numst.sor*numnd.sor)==0)
		{
			cout<<"Answer: "<<(numst.ded*numnd.sor+numst.sor*numnd.ded)/(numst.sor*numnd.sor);
			return;
		}
		int a =__gcd((numst.ded*numnd.sor+numst.sor*numnd.ded),(numst.sor*numnd.sor)); 
		cout<<"Answer: "<<(numst.ded*numnd.sor+numst.sor*numnd.ded)/a<<"/"<<(numst.sor*numnd.sor)/a;
	}
	else if(c=='-')
	{
		if((numst.ded*numnd.sor-numst.sor*numnd.ded)%(numst.sor*numnd.sor)==0)
		{
			cout<<"Answer: "<<(numst.ded*numnd.sor-numst.sor*numnd.ded)/(numst.sor*numnd.sor);
			return;
		}
		int a =__gcd((numst.ded*numnd.sor-numst.sor*numnd.ded),(numst.sor*numnd.sor)); 
		cout<<"Answer: "<<(numst.ded*numnd.sor-numst.sor*numnd.ded)/a<<"/"<<(numst.sor*numnd.sor)/a;
	}
	else if(c=='*')
	{
		if((numst.ded*numnd.ded)%(numst.sor*numnd.sor)==0)
		{
			cout<<"Answer: "<<(numst.ded*numnd.ded)/(numst.sor*numnd.sor);
			return;
		}
		int a =__gcd((numst.ded*numnd.ded),(numst.sor*numnd.sor)); 
		cout<<"Answer: "<<(numst.ded*numnd.ded)/a<<"/"<<(numst.sor*numnd.sor)/a;
	}
	else if(c=='/')
	{
		if((numst.ded*numnd.sor)%(numst.sor*numnd.ded)==0)
		{
			cout<<"Answer: "<<(numst.ded*numnd.sor)/(numst.sor*numnd.ded);
			return;
		}
		int a =__gcd((numst.ded*numnd.sor),(numst.sor*numnd.ded)); 
		cout<<"Answer: "<<(numst.ded*numnd.sor)/a<<"/"<<(numst.sor*numnd.ded)/a;
	}
}

int main()
{
	char s;
	do
	{
		calc();
		cout<<"\nDo another (y/n)? ";
		cin>>s;		
	}
	while(s=='y');
	return 0;
}
