#pragma once 
#include<string>
using namespace std;
class Employee
{
protected:
	string name;
	int id;      //tz
	int seniority;
	float pay;
public:
	Employee(string _name, int _id, int _seniority);       //defult cunstroctor 

	//get , set 
	string getName();
	int getId();
	int getSeniority();
	float  getPay();
	float Getsal();
	//mathods
	float  salaryAfterBonus();
	//cin,cout
	friend std::ostream& operator<<(std::ostream& out, const Employee& e); //cout -print employe
	friend std::istream& operator>>(std::istream& in,  Employee& e); //cin 
};

