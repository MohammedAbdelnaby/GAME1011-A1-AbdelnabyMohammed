#include "Person.h"
#include "Student.h"
#include "StudentType.h"
#include "Survey.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	string nameArr[20] = { "Liam","Noah","Oliver","William","Elijah","James","Benjamin","Lucas","Mason","Ethan","Olivia","Emma","Ava", "Sophia", "Isabella", "Charlotte", "Amelia", "Mia", "Harper", "Evelyn" };
	string collegeArr[10] = { "Algonquin","Boreal", "Cambrian", "Canadore", "George Brown", "Humber", "Sheridan", "Niagara", "Seneca", "Durham" };
	string programArr[10] = { "Game Programming","Computer Science", "Photography", "Music Industry Arts", "Marine Technology", "Baking and Pastry Arts", "Culinary Management", "Culinary Skills", "Animal Care", "Journalism" };
	string streamingArr[4] = { "Netflix","Hulu", "HBO","Disney Plus"};
	string deviceArr[5] = { "Xbox","PS4", "Switch", "PC", "Mobile"};
	int userInput;
	int nonGamaing = 0;
	int gaming = 0;
	cout << "Enter the amout of Students: ";
	cin >> userInput;
	Person** StudentList = new Person*[userInput];
	srand((unsigned)time(NULL));
	for (int i = 0; i < userInput; i++)
	{
		if ((1 + rand() % 2) == 1)
		{
			StudentList[i] = new NonGamingStudent(nameArr[(0 + rand() % 20)], (16 + rand() % 40), collegeArr[(0 + rand() % 10)] , programArr[(0 + rand() % 10)], (1 + rand() % 12), streamingArr[(0 + rand() % 4)] , (0 + rand() % 40));
			++nonGamaing;
			// uncomment to debug
			//StudentList[i]->displayInfo();
		}
		else
		{
			StudentList[i] = new GamingStudent(nameArr[(0 + rand() % 20)], (16 + rand() % 40), collegeArr[(0 + rand() % 10)], programArr[(0 + rand() % 10)], (1 + rand() % 12), deviceArr[(0 + rand() % 5)], (0 + rand() % 40));
			++gaming;
			// uncomment to debug
			//StudentList[i]->displayInfo();
		}
	}
	Survey survey(StudentList, userInput, gaming, nonGamaing);
	system("CLS");
	survey.displayInfo();
}