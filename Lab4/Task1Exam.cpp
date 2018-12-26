#include <iostream>
#include <vector>
using namespace std;
#define MAX 10005

struct Student
{
	string StudentCode;
	string StudentFirstName;
	string StudentLastName;
	string DayOfBirth;
};

vector <Student> ListStudent(MAX);

void InPut();
void OutPutInformation(Student studentform);
void OutPut();
bool comp(Student studentA,Student studentB);
void Sort();

int main()
{
	InPut();
	OutPut();
	Sort();
	return 0;
}

void InPut()
{
	Student student;
	cout<<"Enter Student code: ";
	cin>>student.StudentCode;
	cin.ignore();
	cout<<"Enter Student first name: ";
	cin>>student.StudentFirstName;
	cin.ignore();
	cout<<"Enter Student last name: ";
	cin>>student.StudentLastName;
	cin.ignore();
	cout<<"Enter day of birth: ";
	cin>>student.DayOfBirth;
	cin.ignore();
	
	ListStudent.push_back(student);
}

void OutPutInformation(Student studentform)
{
	cout<<"\tStudent code: "<<studentform.StudentCode<<endl;
	cout<<"\tStudent first name: "<<studentform.StudentFirstName<<endl;
	cout<<"\tStudent last name: "<<studentform.StudentLastName<<endl;
	cout<<"\tday of birth: "<<studentform.DayOfBirth<<endl;
}

void OutPut()
{
	for(int i=0;i<10;i++)
	{
		cout<<"Student Number "<<i+1<<endl;
		OutPutInformation(ListStudent[i]);
//		cout<<ListStudent[i].StudentCode<<endl;
	}
}

bool comp(Student studentA, Student studentB)
{
	if(studentA.StudentLastName[0]<studentB.StudentLastName[0])
		return 1;
	return 0;	
}

void Sort()
{
	for(int i=0;i<ListStudent.size();i++)
		for(int j=i;j<ListStudent.size()-1;j++)
			if(comp(ListStudent[j],ListStudent[j+1]))
				swap(ListStudent[j],ListStudent[j+1]);
				
	OutPut();
}

