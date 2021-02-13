#pragma once
#include <string>
using namespace std;

class Person
{
protected:
	string name;
	int age;
public:
	Person(string name1, int age1)
	{
		name = name1;
		age = age1;
	}
	Person()
	{
	}
	virtual void displayInfo() = 0;
	virtual int getAge() = 0;
	virtual string getService() = 0;
	virtual float getHours() = 0;
};
