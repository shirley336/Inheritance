// People.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>

int _tmain(int argc, _TCHAR* argv[])
{
	string first;
	string last;
	string month;
	string title;
	//double raise;
	int a = 0;
	//int count;
	int b = 0;
	int ageprint;
	string gender;
	unsigned day;
	vector<Person*> people;
	unsigned year;
	int currentyear;
	string currentmonth;
	int currentday;
	string answer;
	string employer;
	string job;
	double pay;
	int count1 = 0;
	while (count1 == 0)
	{
		cout << "First name: ";
		cin >> first;
		cout << "Last name: ";
		cin >> last;
		cout << "Birth month: ";
		cin >> month;
		cout << "Birth day: ";
		cin >> day;
		cout << "Birth year: ";
		cin >> year;
		
	//	prompt for and read in sex; must be MALE or FEMALE
		cout << "Gender (MALE or FEMALE): ";
		cin >> gender;
		cout << "Current Month: " << endl;
		cin >> currentmonth;
		cout << "Current Day: " << endl;
		cin >> currentday;
		cout << "Current Year: " << endl;
		cin >> currentyear;
	//	add a menu with choices:
	//		age (prompt for month, day, year; e.g., today's date)
	//		company (prompt for new company)
	//		title (prompt for new title)
	//		salary (prompt for new salary)
	//		raise (prompt for percent raise)
	//		print
		//	add a vector of Person*
	// add a while loop that:
		// asks if there are any more Person entries
		// if so, prompts for and inputs all Person data for the next Person
		// then asks if this Person is an Employee
		// if so, then prompts for and inputs all Employee data and makes and Employee object
		// if not, makes a Person object
		// in either case, pushes back the new object to the people vector
		cout << "Employee?(Yes or No): ";
		cin >> answer;
		if (answer == "Yes")
		{
			cout << "Company: ";
			cin >> employer;
			cout << "Title: ";
			cin >> job;
			cout << "Salary: ";
			cin >> pay;
			Employee* employee = new Employee(first, last, month, day, year, gender, employer, job, pay);
			cout << "Age: " << employee->age(currentyear, currentmonth, currentday) << " years old" << endl; 
			ageprint = employee->age(currentyear, currentmonth, currentday);
			cout << employee->getFirstName() << " ";
			cout << employee->getLastName() << endl;
			cout << employee->getBirthMonth() << " ";
			cout << employee->getBirthDay() << ", ";
			cout << employee->getBirthYear() << endl;
			cout << employee->getSex() << endl;
			cout << employee->getCompany() << endl;
			cout << employee->getTitle() << endl;
			cout << employee->getSalary() << endl;
			people.push_back(employee);

		}
		else
		{
			Person* person = new Person(first, last, month, day, year, gender);
			people.push_back(person);
		}
		cout << "Add another person? (Yes or No): "<< endl;
		string answer1;
		cin >> answer1;
		if (answer1 == "No")
		{
			count1 = 1;
		}
		/*
		while (a == 0)
		{
			cout << "Please choose from the menu below: " << endl;
			cout << "1. age" << endl << "2. company" << endl << "3. title" << endl << "4. salary" << endl << "5. raise" << endl << "6. print" << endl << "7. quit" << endl;
			cin >> count;
			if (count == 1)
			{
				cout << "Current Month: " << endl;
				cin >> currentmonth;
				cout << "Current Day: " << endl;
				cin >> currentday;
				cout << "Current Year: " << endl;
				cin >> currentyear;
				cout << "Age: " << employee->age(currentyear, currentmonth, currentday) << " years old" << endl; 
				ageprint = employee->age(currentyear, currentmonth, currentday);
				count = 0;
			}
			else if (count == 2)
			{
				cout << "Set Company: " << endl;
				cin >> employer;
				employee->setCompany(employer);
				cout << "New Company: " << employee->getCompany() << endl;
				count = 0;
			}
			else if (count == 3)
			{
				cout << "Set Title: " << endl;
				cin >> title;
				employee->setTitle(title);
				cout << "New Title: " << employee->getTitle() << endl;
				count = 0;
			}
			else if (count == 4)
			{
				count = 0;
				cout << "Set Salary: " << endl;
				cin >> pay;
				employee ->setSalary(pay);
				cout << "New Salary: "<< employee->getSalary() << endl;
				count = 0;
			}
			else if (count == 5)
			{
				count = 0;
				cout << "Raise: " << endl;
				cin >> raise;
				employee->applyRaise(raise);
				cout << "New Salary: " << employee->getSalary() << endl;
				count = 0;
			}
			else if (count == 6)
			{
				employee->print(month,day,year, gender);
				cout << "AGE: " << employee->age(currentyear, currentmonth, currentday) << endl;
				count = 0;
			}
			else if (count == 7)
			{
				a = 1;
				cout << "Bye!" << endl;
				break;
			}
			else if (count == 0)
			{
				b = 1;
			}
			else
			{
				cout << "Sorry, this is not an option." << endl;
			}*/
	}
		// after the above loop is done, do the following in a loop on each Person* in people:
	for (int i = 0; i < people.size(); i++)
	{
		people[i]->print( currentmonth, currentday, currentyear);
	}
	system("pause");
	return 0;
}
