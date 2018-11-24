#include<iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s){}
    void Input()
    {
    	cout<<"Get hour: ";
    	cin>>hours;
    	cout<<"Get minute: ";
    	cin>>minutes;
    	cout<<"Get second: ";
    	cin>>seconds;
	}
    void DisplayTime()
    {
        cout<<"time after add: ";
		cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
	}
    Time Add(Time AddTime)
    {
        AddTime.seconds += seconds;
        AddTime.minutes += minutes;
        AddTime.hours += hours;
        if(AddTime.seconds >= 60)
        {
        	AddTime.minutes += AddTime.seconds / 60;
            AddTime.seconds = AddTime.seconds % 60;
        }

        if(AddTime.minutes >= 60)
        {
            AddTime.hours += AddTime.minutes / 60;
            AddTime.minutes = AddTime.minutes % 60;
        }

        if(AddTime.hours > 12)
        {
            AddTime.hours = AddTime.hours % 12;
        }

        return AddTime;
    }
};

int main()
{
    Time time_1(0, 0, 0);
    Time time_2(0, 0, 0);
	time_2.Input();
    time_2 = time_1.Add(time_2);
    time_2.DisplayTime();

    return 0;
}

