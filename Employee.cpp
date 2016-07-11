// file Employee.cpp

#include "stdafx.h"

Employee::Employee(string first, string last, string month, unsigned day, unsigned year, string gender,
			string employer, string job, double pay)
	: Person(first, last, month, day, year, gender) // invokes base class constructor
			, company (employer), title (job), salary (pay) // invokes field constructors
{}

string Employee::getCompany() const
{
	return company;
}

void Employee::setCompany(string employer)
{
	company = employer;
}

string Employee::getTitle() const
{
	return title;
}

void Employee::setTitle(string job)
{
	title = job;
}

double Employee::getSalary() const
{
	return salary;
}

void Employee::setSalary(double pay)
{
	salary = pay;
}
void Employee::applyRaise(double percent)
{
	salary = percent/100*salary + salary;
}

void Employee::print(string month, int day, int year) 
{
	Person::print (month, day, year); // invokes print method in class Person
	cout << "GENDER: " << getSex() << endl;
	cout << "COMPANY: " << company << endl;
	cout << "TITLE:  " << title << endl;
	cout << "SALARY:  " << salary << endl;
}
