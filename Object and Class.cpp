#include<iostream>
using namespace std;
class student
{
	int roll;
	char name[20];
	public:
		void getdetails();
		void display();
};

void student :: getdetails()
{
	cout<<"Enter Roll";
	cin>>roll;
	cout<<"Enter name";
	cin>>name;
}

void student :: display()
{
	cout<<"Roll"<<roll<<endl<<"Name"<<name;
}

int main()
{
	student s1;
	s1.getdetails();
	s1.display();
	return 0;
}
