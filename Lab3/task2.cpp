#include <iostream>;
using namespace std;

class Employees
{
	private:
		static int CountID;
		float EmployeeComp;
		int Years;
	public:
		void Input()
		{
			++CountID;
			cout<<"Enter ID: "<<CountID<<endl;
			cout<<"Enter Money: ";
			cin>>EmployeeComp;
			cout<<"Enter year: ";
			cin>>Years;
		}
		void Display()
		{
			cout<<"after "<<Years<<" years, this Employee has: "<<EmployeeComp<<endl;
		}
		Employees calc(Employees User)
		{
			for(int i=1;i<=Years;i++)
				EmployeeComp += (EmployeeComp*0.055);
		}
		
};
int Employees::CountID = 0;

int main()
{
	Employees User[3];
	for(int i=0;i<3;i++)
	{
		User[i].Input();
		User[i].calc(User[i]);
		User[i].Display();
	}
	return 0;
}
