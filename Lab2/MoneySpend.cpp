#include <iostream>
using namespace std;
#define ll long long
#define db double
db amount,years;
db rate;
void input()
{
	cout<<"Enter initial amount: ";
	cin>>amount;
	cout<<"Enter number of years: ";
	cin>>years;
	cout<<"Enter interest rate (percent per year): ";
	cin>>rate;
}

db moneyres(db a)
{
	for(ll i=1;i<=years;i++)
	{
		cout<<rate/100<<endl;
		a+=(a*(rate/100));
	}
	return a;
}

int main()
{
	input();
	cout<<"At the end of "<<years<<" years, you will have "<<moneyres(amount)<<" dollars.";
	return 0; 
}

