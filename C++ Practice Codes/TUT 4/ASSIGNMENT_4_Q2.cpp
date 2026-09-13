#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

double calcStopDistance (double x1, double y1, double x2, double y2)
{
	double deltaX = 0.0 + x2 - x1;
	double deltaY = 0.0 + y2 - y1;
	double distance = sqrt(pow(deltaX, 2) + pow(deltaY, 2));
	
	return distance;
}

int main()
{
	ifstream taxi ("taxi.txt");
	
	bool returnTrip = false;
	int numStops = 0;
	double xPos1 = 0;
	double yPos1 = 0;
	double xPos2 = 0;
	double yPos2 = 0;
	double tripDist = 0;
	double tripCost = 0;
	double cumDist = 0;
	double cumCost = 0;
	int numTrip = 1;
	
	double longestTrip = 0;
	double leastExpensive = INT_MAX;
	
	const double stopCost = 11;
	const double perKm = 2.7;
	
	cout << setw(6) << "Trip" << setw(8) << "Return";
	cout << setw(8) << "Stops" << setw(11) << "Distance";
	cout << setw(9) << "Cost" << setw(12) << "Cumulative";
	cout << setw(12) << "Cumulative" << endl;
	cout << setw(54) << "Distance" << setw(12) << "cost" << endl;
	
	while (taxi >> returnTrip)
	{
		//reset variables
		tripDist = 0;
		tripCost = 0;
		xPos1 = 0;
		yPos1 = 0;
		
		taxi >> numStops;
		for (int i=0; i < numStops; i++)
		{
			taxi >> xPos2 >> yPos2;
			tripDist += calcStopDistance (xPos1, yPos1, xPos2, yPos2);
			xPos1 = xPos2;
			yPos1 = yPos2;
			
		}
		
		//add return distance if return trip
		if (returnTrip)
		{
			tripDist += calcStopDistance (xPos1, yPos1, 0, 0);
		}
		
		//calculate cost of trip 
		tripCost = tripDist * perKm + numStops * stopCost;
		//add current trip distance to cumulative
		cumDist += tripDist;
		//add current trip cost to cumulative
		cumCost += tripCost;
		
		//checks if trip is longest
		if (tripDist > longestTrip)
		{
			longestTrip = tripDist;
		}
		
		//checks if trip is least expensive
		if (tripCost < leastExpensive)
		{
			leastExpensive = tripCost;
		}
		
		//prints details of trip
		if (numTrip <= 8 || numTrip%10 == 8)
		{
			cout << setw(6) << numTrip;
			cout << setw(8) << returnTrip;
			cout << setw(8) << numStops;
			cout << setw(11) << fixed << setprecision(2) << tripDist;
			cout << setw(9) << fixed << setprecision(2) << tripCost;
			cout << setw(12) << fixed << setprecision(2) << cumDist;
			cout << setw(12) << fixed << setprecision(2) << cumCost << endl;
		}
		
		numTrip ++;
	}
	
	//prints summative details of August
	cout << endl << "Cummulative distance from August: ";
	cout << fixed << setprecision(2) << cumDist << endl;
	cout << "Cummulative collected amount: ";
	cout << fixed << setprecision(2) << cumCost << endl;
	cout << "Longest trip in August: ";
	cout << fixed << setprecision(2) << longestTrip << endl;
	cout << "Least expensive trip in August: ";
	cout << fixed << setprecision(2) << leastExpensive << endl;
	
	return 0;
}

/*
  Trip  Return   Stops   Distance     Cost  Cumulative  Cumulative
                                              Distance        cost
     1       0       1      10.20    38.54       10.20       38.54
     2       1       2      12.00    54.40       22.20       92.94
     3       0       4      32.84   132.67       55.04      225.61
     4       0       3      21.03    89.78       76.07      315.40
     5       0       5      29.52   134.71      105.60      450.11
     6       1       7      51.39   215.76      156.99      665.87
     7       0       2      10.64    50.74      167.63      716.60
     8       0       1      10.10    38.27      177.73      754.87
    18       1       4      46.75   170.23      475.43     1987.65
    28       0       4      31.79   129.84      743.98     3042.75
    38       0       1       4.61    23.44      954.29     3907.59
    48       0       4      30.37   125.99     1213.28     4958.84
    58       1       1       9.84    37.57     1444.36     5857.76
    68       1       2      18.40    71.68     1661.34     6762.61
    78       0       3      24.37    98.81     1871.36     7571.68

Cummulative distance from August: 1871.36
Cummulative collected amount: 7571.68
Longest trip in August: 51.39
Least expensive trip in August: 23.44

--------------------------------
Process exited after 0.3271 seconds with return value 0
Press any key to continue . . .
*/