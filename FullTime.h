#pragma once
#include"Employee.h"
class FullTime :public Employee
{
protected:
	float yearSalery;   //salery for all the year
public:
	FullTime(string name, int id, int seniority, float pay) :Employee(name, id, seniority),yearSalery(pay) {}; //cunsrtuctor 
	FullTime() : Employee("\0", 0, 0), yearSalery(0) {};
	void salery();  //salery per month
	friend std::ostream& operator<<(std::ostream& out, const FullTime& ft); //cout -print employe
	friend std::istream& operator>>(std::istream& in, FullTime& ft); //cin 

};

