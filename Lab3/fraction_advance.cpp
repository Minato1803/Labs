#include <iostream>
#include <string.h>
#include <sstream>
#include <Windows.h>
using namespace std;
#define ll long long
#define db double

string a,b,quest;
char c;

db trans(string s)
{
	string ss;
	db a,b;
	for(ll i=0;i<s.find("/");i++)
	{
		ss+=s[i];
	}
	stringstream(ss)>>a;
	ss="";
	for(ll i=s.find("/")+1;i<s.length();i++)
	{
		ss+=s[i];
	}
	stringstream(ss)>>b;
	if(b==0) return -1;
	return a/b;
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
	db first,second;
	do
	{
		loop:
		system("cls");
		cout<<"Enter first number, operator, second number: ";
		cin>>a>>c>>b;
		first= trans(a);
		second= trans(b);
		if(first==-1||second==-1)
		{	
			cout<<"\n\t\t\twrong input!!!!!!!";
			Sleep(1000);
		}	
	}
	while(first==-1||second==-1);
	cout<<"answer = "<<calc(first,second,c)<<endl;
	cout<<"Do another (y/n)? ";
	cin>>quest;
	if(quest=='y')
		goto loop;
}

int main()
{
	solves();
	return 0;
}
