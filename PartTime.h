#pragma once
#include"Employee.h"
class PartTime :public Employee
{
protected:
	int hours;     //houer that work
	float payHouer;   //pay for houer
public:
	PartTime(string name, int id, int seniority, int _hours, float _payh) :Employee(name, id, seniority), hours(_hours), payHouer(_payh) {} //cunsrtuctor 
	//get,set
	PartTime() : Employee("\0", 0, 0), hours(0), payHouer(0) {}
	float getSalery();
	void salery();//salery per month
	friend std::ostream& operator<<(std::ostream& out, const PartTime& p); //cout -print employe
	friend std::istream& operator>>(std::istream& in, PartTime& p); //cin 

};

