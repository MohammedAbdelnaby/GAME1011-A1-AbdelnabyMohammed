#pragma once
#include "Person.h"

class Survey
{
private:
	int averageAgeGaming = 0;
	int averageAgeNonGaming = 0;
	int averageHoursGaming = 0;
	int averageHoursNonGaming = 0;
	string mostDevice;
	string mostService;
	string streamingArr[4] = {"Netflix","Hulu", "HBO","Disney"};
	string GameingArr[5] = { "Xbox", "PS4", "Switch", "PC", "Mobile" };
	int numberOfGamers[5] = { 0,0, 0, 0, 0};
	int numberOfNonGamer[4] = { 0,0,0,0 };
	int highestNumber=0;
	int indexTracker=0;
	int indexTracker1=0;
	int Gaming;
	int NonGaming;
public:
	Survey(Person* List[], int size, int gaming, int NonGamingp)
	{
		Gaming = gaming;
		NonGaming = NonGamingp;
		for (int i = 0; i < size; i++)
		{
			if (List[i]->getService() == "Xbox" || List[i]->getService() == "PS4" || List[i]->getService() == "Switch" || List[i]->getService() == "PC" || List[i]->getService() == "Mobile")
			{
				averageAgeGaming += List[i]->getAge();
				averageHoursGaming += List[i]->getHours();
				for (int j = 0; j < 4; j++)
				{
					if (List[i]->getService() == GameingArr[j])
					{
						++numberOfGamers[j];
					}
				}
			}
			else
			{
				averageAgeNonGaming += List[i]->getAge();
				averageHoursNonGaming += List[i]->getHours();
				for (int j = 0; j < 5; j++)
				{
					if (List[i]->getService() == streamingArr[j])
					{
						++numberOfNonGamer[j];
					}
				}
			}
		}
		
		for (int h = 0; h < 5; h++)
		{
			if (numberOfGamers[h] > highestNumber)
			{
				highestNumber = numberOfGamers[h];
				indexTracker = h;
			}
			mostDevice = GameingArr[indexTracker];
		}
		

		for (int h = 0; h < 4; h++)
		{
			if (numberOfNonGamer[h] > highestNumber)
			{
				highestNumber = numberOfNonGamer[h];
				indexTracker1 = h;
			}
			mostService = streamingArr[indexTracker1];
		}
		
	}
	
	void displayInfo()
	{
		if (NonGaming != 0)
		{
			cout << NonGaming << " Non Gaming Students:" << endl;
			cout << "	-Average age: " << (averageAgeNonGaming / NonGaming) << endl;
			cout << "	-Most preferred streaming service: " << mostService << endl;
			cout << "	-Average hours spent consuming non-gaming entertainment:  " << (averageHoursNonGaming / NonGaming) << endl;
		}
		if (Gaming != 0)
		{
			cout << Gaming << " Gaming Students:" << endl;
			cout << "	-Average age: " << (averageAgeGaming / Gaming) << endl;
			cout << "	-Most preferred streaming service: " << mostDevice << endl;
			cout << "	-Average hours spent consuming gaming entertainment:  " << (averageHoursGaming / Gaming) << endl;
		}
	}
};
