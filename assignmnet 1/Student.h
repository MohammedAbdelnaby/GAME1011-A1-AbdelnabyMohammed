#pragma once
#include "Person.h"
using namespace std;

class Student :public Person
{
protected:
	string college;
	string program;
	int semester;
public:
	Student(string name, int age, string college1, string program1, int semester1 ) : Person(name, age)
	{
		college = college1;
		program = program1;
		semester = semester1;
	}
	Student()
	{
	}
};