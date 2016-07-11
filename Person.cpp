// file Person.cpp

#include "stdafx.h"
#include <vector>
Person::Person(string first, string last, string month, unsigned day, unsigned year, string gender)
	: firstName (first), lastName (last), birthMonth (month), birthDay (day), birthYear (year), gender (gender)
{}

string Person::getFirstName() const
{
	return firstName;
}

string Person::getLastName() const
{
	return lastName;
}

string Person::getBirthMonth() const
{
	return birthMonth;
}

unsigned Person::getBirthDay() const
{
	return birthDay;
}

unsigned Person::getBirthYear() const
{
	return birthYear;
}

string Person::getSex() const
{
	return gender;
}

int Person::age(unsigned year, string month, unsigned day)
{
	vector<string> months;
	int old = 0;
	int number = 0;
	int current = 0;
	months.push_back("January");
	months.push_back("February");
	months.push_back("March");
	months.push_back("April");
	months.push_back("May");
	months.push_back("June");
	months.push_back("July");
	months.push_back("August");
	months.push_back("September");
	months.push_back("October");
	months.push_back("November");
	months.push_back("December");
	for (int i = 0; i < months.size(); i++)
	{
		if (months[i] == birthMonth)
		{
			old = i;
		}
		if (months[i] == month)
		{
			current = i;
		}
	}

	if (current > old) 
	{
		number = year-birthYear;
		return number;
	}
	else if (current == old)
	{
		if (day >= birthDay)
		{
			number = year-birthYear;
			return number;
		}
		else
		{
			number = year-birthYear-1;
			return number;
		}
	}
	else
	{
		number = year-birthYear-1;
		return number;
	}
}

void Person::print(string month, int day, int year)
{
	cout << "NAME:     " << firstName << " " << lastName << endl;
	cout << "BIRTHDAY: " << birthMonth << " " << birthDay << ", " << birthYear << endl;
	cout << "GENDER: " << getSex() << endl;
	cout << "AGE: " << age(year, month, day) << endl;
}
