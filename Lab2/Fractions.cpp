#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;
#define ll long long
#define db double

ll a1,b1,a2,b2;
char c;

db num(ll a,ll b)
{
	return (db) a/b;
}

db calc(db a, db b, char c)
{
	if(c=='+')
		return a+b;
	if(c=='-')
		return a-b;
	if(c=='*')
		return a*b;
	if(c=='/')
		return a/b;			
}

void solves()
{
	do
	{
		cout<<"Enter first number, operator, second number: ";
		cin>>a1>>c>>b1>>c>>a2>>c>>b2;
	}
	while(b1==0&&b2==0);
	db first = num(a1,b1);
	db second = num(a2,b2);
	cout<<first<<" "<<second<<endl;
	cout<<"answer = "<<calc(first,second,c);
	
}

int main()
{
	solves();
	return 0;
}
