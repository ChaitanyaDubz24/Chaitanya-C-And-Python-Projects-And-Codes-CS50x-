// Viyasan & Chaitanya

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string filename = ""; 
	cout << "What is the file name? "; 
	cin >> filename;
	ifstream fin(filename);


	if (!fin)
	{
		cout << "Could not open file." << endl;
		return 1;
	}

	double unixtime1 = 0, unixtime2 = 0;
	double celsius1 = 0, celsius2 = 0;

	fin >> unixtime1 >> celsius1 >> unixtime2 >> celsius2;

	fin.close();
	string status1 = "", status2 = "";

	if (celsius1 > 55) 
	{
		if (celsius1 >= 70) 
		{
			status1 = "1st status 'dangerously hot'";
		}

		else 
		{
			status1 = "1st status 'heavy load'";
		}
	}

	else 
	{
		status1 = "1st status 'idle'";
	}

	if (celsius2 > 55)
	{
		if (celsius2 >= 70) 
		{
			status2 = "2nd status 'dangerously hot'";
		}

		else 
		{
			status2 = "2nd status 'heavy load'";
		}
	}

	else 
	{
		status2 = "2nd status 'idle'";
	}
	
	cout << status1 << ", at " << celsius1 << " degrees." << endl << status2 << ", at " << celsius2 << " degrees." << endl;

	if (celsius1 >= 70 && celsius2 >= 70)
	{
		cout << "The server is in a crisis";
	}

	return 0;
}

/*

Test Case 1 (File 1)

What is the file name? temperature_data_1.txt
1st status 'idle', at 43 degrees.
2nd status 'idle', at 42 degrees.

--------------------------------
Process exited after 9.93 seconds with return value 0
Press any key to continue . . .


Test Case 2 (File 2)

What is the file name? temperature_data_2.txt
1st status 'idle', at 55 degrees.
2nd status 'heavy load', at 60 degrees.

--------------------------------
Process exited after 15.23 seconds with return value 0
Press any key to continue . . .



Test Case 3 (File 3)

What is the file name? temperature_data_3.txt
1st status 'dangerously hot', at 71 degrees.
2nd status 'heavy load', at 68 degrees.

--------------------------------
Process exited after 11.27 seconds with return value 0
Press any key to continue . . .


Test Case 4 (File 4)

what is the file name? temperature_data_4.txt
1st status 'dangerously hot', at 70 degrees.
2nd status 'dangerously hot', at 71 degrees.
The server is in a crisis
--------------------------------
Process exited after 10.24 seconds with return value 0
Press any key to continue . . .


Test Case 5 (Invalid File Name)

What is the file name? wrong_file_name.txt
Could not open file.

--------------------------------
Process exited after 8.041 seconds with return value 1
Press any key to continue . . .

*/
