#include <iostream>
using namespace std;

int a,b;
char s,quest;

double calc(int a, int b, char s)
{
	if(s=='+')
		return a+b;
	if(s=='-')
		return a-b;
	if(s=='*')
		return a*b;
	if(s=='/')
		return (double) a/b;			
}

void solves()
{
	do
	{
		cout<<"Enter first number, operator, second number: ";
		cin>>a>>s>>b;
		cout<<"Answer = "<<calc(a,b,s)<<endl;
		cout<<"Do another (y/n)? ";
		cin>>quest;
	}
	while(quest=='y');
}

int main()
{
	solves();
	return 0;
}
