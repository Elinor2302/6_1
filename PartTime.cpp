#include "PartTime.h"
#include<iostream>
using namespace std;

float PartTime::getSalery()
{
	return pay;
}

void PartTime::salery()
{
	pay=(hours * payHouer);
}

std::ostream& operator<<(std::ostream& out, const PartTime& partTime)
{
	Employee e = partTime;  //build a Attributed variable of employee type, fulltime is a employee
	cout << e;              //cout data it base 
	cout <<"Hours: ";
	out << partTime.hours << endl;
	cout <<"Salary per Month: ";
	out <<partTime.pay<<endl;
	return out;
}

std::istream& operator>>(std::istream& in, PartTime& p)
{
	const char* s = "ERROR";
	Employee &e = p;  //go to the base,ft is a employee
	in >> e;
	in >> p.hours >> p.payHouer;
	if (p.name.find_first_of("123456789") != -1)
	{ 
		/*in.ignore(256, '\n');*/
		throw s;
	}
	if ( p.id < 100000000 || p.id > 999999999 ) //if one detail is wrong
	{
	  /*in.ignore(256, '\n');*/
    	throw s;
	}
	if ( p.seniority < 0 || p.hours < 0 || p.payHouer < 0) //if one detail is wrong
	{
	/*in.ignore(256, '\n');*/
	throw s;
	}
	p.salery();
	return in;
}
