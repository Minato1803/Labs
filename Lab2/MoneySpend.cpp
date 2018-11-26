#include <iostream>
using namespace std;
double amount,years;
double rate;
void input()
{
	cout<<"Enter initial amount: ";
	cin>>amount;
	cout<<"Enter number of years: ";
	cin>>years;
	cout<<"Enter interest rate (percent per year): ";
	cin>>rate;
}

double moneyres(double a)
{
	for(int i=1;i<=years;i++)
	{
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

