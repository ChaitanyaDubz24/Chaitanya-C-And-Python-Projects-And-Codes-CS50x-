// Viyasan & Chaitanya

#include <iostream> 
#include <string>

using namespace std;

int main()
{
	// Defining the variables:
	int time = 0; 
	string date = "";
	string eat = "";

	cout << "Enter day and time: ";
	cin >> date >> time;


	if (time >= 6) 
	{
		eat = "Since not hungry serve chips, ";
	}
	
	else 
	{
		eat = "Since hungry order pizza, ";
	}

	if (time > 9) 
	{
		cout << eat << "on " << date << " at " << time << " play Codenames" << endl;
	}

	else 
	{
		if (date == "Monday" || date == "Tuesday" || date == "Wednesday" || date == "Thursday") 
		{
			cout << eat << "on " << date << " at " << time << " play Catan" << endl;
		}
	
		else if (date == "Friday" || date == "Saturday") 
		{
			if (time >= 7) 
			{
				cout << eat << "on " << date << " at " << time << " play Ticket to Ride" << endl;
			}
			else 
			{
				cout << eat << "on " << date << " at " << time << " play Spirit Island" << endl;	
			}
		}
		
		else // The only day left is Sunday
		{
		cout << eat << "on " << date << " at " << time << " play Mysterium" << endl;
		}
		
	}	
	
	return 0;
}


/*
Test case 1

Enter day and time: Monday 4
Since hungry order pizza, on Monday at 4 play Catan

--------------------------------
Process exited after 3.988 seconds with return value 0
Press any key to continue . . .

Test case 2

Enter day and time: Sunday 10
Since not hungry serve chips, on Sunday at 10 play Codenames

--------------------------------
Process exited after 31.55 seconds with return value 0
Press any key to continue . . .

Test Case 3

Enter day and time: Friday 7
Since not hungry serve chips, on Friday at 7 play Ticket to Ride

--------------------------------
Process exited after 6.605 seconds with return value 0
Press any key to continue . . .


Test case 4

Enter day and time: Saturday 5
Since hungry order pizza, on Saturday at 5 play Spirit Island

--------------------------------
Process exited after 9.92 seconds with return value 0
Press any key to continue . . .
*/
