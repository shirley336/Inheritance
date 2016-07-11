// file Person.h

#include <string>
using namespace std;

class Person
{
private:
	string firstName;
	string lastName;
	string birthMonth;
	string gender;
	unsigned birthDay;
	unsigned birthYear;
public:
	Person(string first, string last, string month, unsigned day, unsigned year, string gender);
	string getFirstName() const;
	string getLastName() const;
	string getBirthMonth() const;
	unsigned getBirthDay() const;
	unsigned getBirthYear() const;
	string getGender() const; // add this accessor method
	int age(unsigned year, string month, unsigned day); // age (years) from field values to arg values
	virtual void print(string month, int day, int year); // print in the format below:

};
