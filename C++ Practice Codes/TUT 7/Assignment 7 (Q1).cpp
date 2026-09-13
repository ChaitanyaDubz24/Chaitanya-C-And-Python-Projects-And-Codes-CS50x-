/*
Austin Li and Chaitanya Dubey
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readParkingData(ifstream &fin, int pStatus[], string pName[], int maxSpaces)
{
	for(int i = 0, i < maxSpaces, i++)
	{
		pStatus[i] = -1;
		pName[i] = "EMPTY";
	}
	
	int pStatusFile = 0;
	int pNameFile = "";
	int pSpotFile = 0;	
	
	while(fin >> pStatusFile >> pNameFile >> pSpotFile)
	{
		pStatus[pStopFile-1] = pStatusFile;
		pName[pStopFile-1] = pNameFile;
	}
}

void moveFaculty(int pStatus[], string pName[], int maxSpaces)
{
	for(int i = 25, i < maxSpaces, i++)
	{
		if(pStatus[i] == 1)
		{
			int newParkingSpot = closestSpace(pName, 1, maxSpaces)
			
			if (newParkingSpot <= 25)
			{
				int newIndex = newParkingSpot - 1
				
				assignSpot(pStatus[], pName[], 1, pName[i])
				freeSpace(pStatus[], pName[], 1, pName[i])
				
			}
		}
	}
}
int main()
{
	
}