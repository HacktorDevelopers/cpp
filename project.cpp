#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	cout << "Hello I have been modified"<<endl;
	cout << "Hello world" << endl;
	int year_of_birth, age;

	string name;
	cout << "Enter Your Name: ";
	cin >> name;

	cout << "Enter Year Of Birth: ";
	cin >> year_of_birth;

	age = 2018 - year_of_birth;
	//	cout<<"Enter Your Name: ";
	cout << "Your name is " << name << " You are " << age << " years old" << endl;
	
	
	
}
