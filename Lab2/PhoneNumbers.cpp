#include <iostream>
using namespace std;
typedef struct phonenum
{
	string areacode, exchange, numbers;
};

void display(void)
{
	struct phonenum num;
	struct phonenum defaul;
	defaul.areacode = "212";
	defaul.exchange = "767";
	defaul.numbers = "8900";
	do
	{
		cout<< "Enter your area code, exchange, and number: ";
		cin>>num.areacode>>num.exchange>>num.numbers;
		cout<<"My number is: ("<<defaul.areacode<<") "<<defaul.exchange<<"-"<<defaul.numbers<<endl;
		cout<<"Your number is: ("<<num.areacode<<") "<<num.exchange<<"-"<<num.numbers<<endl;
	}
	while(1);
}
	
int main()
{
	display();
	return 0;
}		
