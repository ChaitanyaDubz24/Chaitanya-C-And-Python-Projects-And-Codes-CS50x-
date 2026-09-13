/*
Sojung Shim and Chaitanya Dubey
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string getSeason(int month)
{
	if(month>=1 && month<=3)
	{
		return "Winter";
	}

	else if(month>=4 && month<=6)
	{
		return "Spring";
	}
	
	else if(month>=7 && month<=9)
	{
		return "Summer";
	}
	
	else
	{
		return "Fall";
	}
}

string getTimeOfDay(int hour)
{
	if(hour >= 0 and hour <= 11)
	{
		return "Morning";
	}
	
	if(hour >= 12 and hour <= 17)
	{
		return "Day";
	}
	
	else
	{
		return "Night";
	}
}

void processFile(string fileName, 
				 int &winterTotal, int &springTotal, int &summerTotal, int &fallTotal,
				 int &morningTotal, int &dayTotal, int &nightTotal
				)
{
	int intersection;
	int month;
	int day;
	int hour;
	int minute;
	int cyclists;
	ifstream fin(fileName);

    while (fin >> intersection >> month >> day >> hour >> minute >> cyclists) 
	{
        string season = getSeason(month);
        string timeOfDay = getTimeOfDay(hour);

        if (season == "Winter"){
        	winterTotal += cyclists;
		} 
		
        else if (season == "Spring") 
        {
        	springTotal += cyclists;
		}
		
        else if (season == "Summer") 
        {
        	summerTotal += cyclists;
		}
		
        else 
        {
        	fallTotal += cyclists;
		}

        
        if (timeOfDay == "Morning") 
        {
        	morningTotal += cyclists;
		}
		
        else if (timeOfDay == "Day") 
        {
        	dayTotal += cyclists;
		}
		
        else
        {
        	nightTotal += cyclists;
		}
    }
    
    fin.close();
}

int main()
{
	int winterTotal = 0;
	int springTotal = 0;
	int summerTotal = 0;
	int fallTotal = 0;
	
    int morningTotal = 0;
	int dayTotal = 0;
	int nightTotal = 0;

    processFile("cycling_data.txt", winterTotal, springTotal, summerTotal, fallTotal, morningTotal, dayTotal, nightTotal);
    
    cout << "Number of cyclists in winter: " << winterTotal << endl;
    cout << "Number of cyclists in spring: " << springTotal << endl;
    cout << "Number of cyclists in summer: " << summerTotal << endl;
    cout << "Number of cyclists in fall: " << fallTotal << endl;
    
    cout << "" << endl;
	   
    int maxCyclists = max(morningTotal, max(dayTotal, nightTotal));
    string maxTime;
    
    if (maxCyclists == morningTotal)
	{
		cout << "Most cyclists occur during the Morning." << maxTime << endl;
	}
	
    else if (maxCyclists == dayTotal)
	{
		cout << "Most cyclists occur during the Day." << maxTime << endl;
	}
	
    else
    {
    	cout << "Most cyclists occur during the Nigt." << maxTime << endl;
	}
	
    return 0;  
}

/*
Number of cyclists in winter: 593911
Number of cyclists in spring: 1486531
Number of cyclists in summer: 1069223
Number of cyclists in fall: 0

Most cyclists occur during the Day.

--------------------------------
Process exited after 3.539 seconds with return value 0
Press any key to continue . . .
*/