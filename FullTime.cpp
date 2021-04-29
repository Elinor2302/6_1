#include "FullTime.h"
#include<iostream>
using namespace std;

void FullTime::salery()
{   
	pay= (yearSalery/12);
}
std::ostream& operator<<(std::ostream& out, const FullTime& fulltime)
{
	 
	Employee e = fulltime;  
	cout << e;
	cout << "Salary per Month: ";
	out << fulltime.pay<<endl;
	return out;
}

std::istream& operator>>(std::istream& in, FullTime& ft)
{
	const char* s = "ERROR";
	Employee &e = ft;  //go to the base,ft is a employee
	in >> e;
	in >> ft.yearSalery;
	if (ft.name.find_first_of("123456789") != -1 || ft.id < 100000000 || ft.id > 999999999 || ft.seniority < 0 || ft.pay < 0 ) //if one detail is wrong
	{
		in.ignore(256, '\n');
		throw s;
	}
	
	ft.salery();
	return in;
}
