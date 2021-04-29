#include "Employee.h"
#include<iostream>
using namespace std;
Employee::Employee(string _name, int _id, int _seniority)
{  
	name = _name;
	id = _id;
	seniority = _seniority;
	pay = 0;
}
string Employee::getName()
{
	return name;
}
int Employee::getId()
{
	return id;
}
int Employee::getSeniority()
{
	return seniority;
}
float Employee::getPay()
{
	return pay;
}

float Employee::Getsal()
{
	return salaryAfterBonus();
}

float Employee::salaryAfterBonus()
{
	if (seniority <= 5)  //if he has less than 5 or 5 years of priority
	{
		pay += 500;
	}
	else                 //more than 5 years
	{
		float bon = 0.25 * pay;
		pay += bon;
	}
	return pay;
}
std::ostream& operator<<(std::ostream& out, const Employee& employee) //cout
{
	out << "Employee: " << employee.name << endl;
	out << "Employee ID: " << employee.id << endl;
	out << "Years Seniority: " << employee.seniority << endl;
	return out;
}

std::istream& operator>>(std::istream& in, Employee& e)   //cin 
{
	cout << "Enter employee details :" << endl;
	in >> e.name >> e.id >> e.seniority;
	return in;
}
