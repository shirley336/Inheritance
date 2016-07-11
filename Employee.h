// file Employee.h

#include <string>
using namespace std;

class Employee : public Person // class Employee inherits from base class Person
{
private:
	string company;
	string title;
	double salary;
public:
	Employee(string first, string last, string month, unsigned day, unsigned year, string gender,
			string employer, string job, double pay);
	string getCompany() const;
	void setCompany(string employer);
	string getTitle() const;
	void setTitle(string job);
	double getSalary() const;
	void setSalary(double pay);
	void applyRaise(double percent); // updates salary; 10.0 means 10 percent
	virtual void print(string month, int day, int year) ;
};
