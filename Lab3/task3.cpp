#include <iostream>
using namespace std;

class SerialNum
{
	private:
		static int Count;
		int Serial;
	public:
		void Display()
		{
			Serial = ++Count; 
			cout<<"I am object number "<<Serial<<endl;
		}	
};
int SerialNum::Count = 0;

int main()
{
	SerialNum Num[3];
	for(int i=0;i<3;i++)
		Num[i].Display();
	return 0;	
}
