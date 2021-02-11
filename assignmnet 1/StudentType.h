#pragma once
#include <string>
#include <iostream>
#include"Student.h"
using namespace std;

class NonGamingStudent : public Student
{
private:
	string StreamingServ;
	int hoursConsumed;
public:
	NonGamingStudent(string name, int age, string college, string program, int semester, string service, int hours): Student(name ,age ,college,program, semester)
	{
		StreamingServ = service;
		hoursConsumed = hours;
	}
	void displayInfo()
	{
		cout << name << ":" << endl;
		cout << "Age: " << age << endl;
		cout << "College: " << college << endl;
		cout << "Program: " << program << endl;
		cout << "Currnet semester: " << semester << endl;
		cout << "Perferred streaming service: " << StreamingServ << endl;
		cout << "Hours consuming :" << hoursConsumed << endl << endl;
	}
	int getAge()
	{
		return age;
	}
	string getService()
	{
		return StreamingServ;
	}
	float getHours()
	{
		return hoursConsumed;
	}
};


class GamingStudent : public Student
{
private:
	string deviceServ;
	int hoursConsumed;
public:
	GamingStudent(string name, int age, string college, string program, int semester, string service, int hours): Student(name ,age ,college,program, semester)
	{
		deviceServ = service;
		hoursConsumed = hours;
	}
	void displayInfo()
	{
		cout << name << ":" << endl;
		cout << "Age: " << age << endl;
		cout << "College: " << college << endl;
		cout << "Program: " << program << endl;
		cout << "Currnet semester: " << semester << endl;
		cout << "Perferred streaming service: " << deviceServ << endl;
		cout << "Hours consuming :" << hoursConsumed << endl << endl;
	}
	int getAge()
	{
		return age;
	}
	string getService()
	{
		return deviceServ;
	}
	float getHours()
	{
		return hoursConsumed;
	}
};
