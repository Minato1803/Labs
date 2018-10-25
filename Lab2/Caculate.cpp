#include <iostream>
using namespace std;
#define ll long long
#define db double

ll a,b;
char s,quest;

db calc(ll a, ll b, char s)
{
	if(s=='+')
		return a+b;
	if(s=='-')
		return a-b;
	if(s=='*')
		return a*b;
	if(s=='/')
		return (db) a/b;			
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
