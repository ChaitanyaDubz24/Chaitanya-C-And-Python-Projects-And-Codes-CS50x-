// Chaitanya and Shivam

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	
	ifstream fin("command_data.txt");
	if (!fin)
	{
		cout << "Error! could not open the file: command_data.txt";
		return 1;
	}
	
	
	int totalCommands = 0;
	int interestingCount = 0;
	int unauthorizedCount = 0;
	int gppCount = 0;
	int makeCount = 0;
	
	
	int cmdID;
	string username;
	long timeStamp;
	string commandType;
	int N;
	
	
	while (fin >> cmdID >> username >> timeStamp >> commandType >> N)
	{
		totalCommands++;
		
		bool hasStd = false;
		bool correctOutput = true;
		
		//Reading N components:
		for(int i = 0; i < N; i++)
		{
			string component;
			
			fin >> component;
			
			if (commandType == "g++")
			{
				if (component == "-std=c++17")
				{
					hasStd = true;
				}
				
				if (component == "-o")
				{
					string nextComp;
					
					if (i + 1 < N)
					{
						fin >> nextComp;
						i++;
						
						if (nextComp != "a.out")
						{
							correctOutput = false;
						}
					}
					
					else
					{
						correctOutput = false;
					}
				}
			}	
		}
		
		
		//Interesting Commands:
		if (commandType == "make" || commandType == "g++" || commandType == "valgrind" || commandType == "tar" || commandType == "./a.out")
		{
			interestingCount++;
		}
		
		//Unauthorized Commands:
		if (commandType == "sudo")
		{
			unauthorizedCount++;
		}
		
		//Compilation Commands:
		if (commandType == "make")
		{
			makeCount++;
		}
		
		if (commandType == "g++")
		{
			gppCount++;
			
			bool invalidStd = !hasStd;
			bool invalidOut = !correctOutput;
			
			if (invalidStd || invalidOut)
			{
				cout << "Command " << cmdID << " is invalid: ";
				
				if (invalidStd && invalidOut)
				{
					cout << "both errors" << endl;
				}
				
				else if (invalidStd)
				{
					cout << "wrong or missing standard" << endl;
				}
				
				else
				{
					cout << "wrong output file" << endl;
				}
			}
		}	
	}
	
	fin.close();
	
	//Calculations:
	double unauthorizedPer = (100.0 * unauthorizedCount) / totalCommands;
	
	double gppPer = (100.0 * gppCount) / (gppCount + makeCount);
	
	//Output:
	cout << endl << "Total number of interesting commands: " << interestingCount << endl;
	cout << "Percentage of unauthorized commands: " << unauthorizedPer << "%" << endl;
	cout << "Percentage of g++ compilation commands: " << gppPer << "%" << endl;
	
	return 0;
}

/*

OUTPUT:

Command 63438 is invalid: wrong or missing standard
Command 63445 is invalid: wrong or missing standard
Command 63447 is invalid: wrong or missing standard
Command 63449 is invalid: wrong or missing standard
Command 63451 is invalid: wrong or missing standard
Command 63453 is invalid: wrong or missing standard
Command 63455 is invalid: wrong or missing standard
Command 63457 is invalid: wrong or missing standard
Command 63459 is invalid: wrong or missing standard
Command 63477 is invalid: wrong or missing standard
Command 63865 is invalid: both errors
Command 64232 is invalid: wrong output file
Command 64233 is invalid: wrong output file
Command 64246 is invalid: wrong output file
Command 64261 is invalid: wrong output file
Command 64263 is invalid: wrong output file
Command 64265 is invalid: wrong output file
Command 64267 is invalid: wrong output file
Command 64298 is invalid: wrong output file

Total number of interesting commands: 535
Percentage of unauthorized commands: 0.9%
Percentage of g++ compilation commands: 11.5556%

--------------------------------
Process exited after 4.302 seconds with return value 0
Press any key to continue . . .

*/
