/*
 Chaitanya Dubey
*/

#include <iostream> //lets us use cout and cin

using namespace std;

int main()
{
	//Defining the variables:
	float c_p = 4.2;
	float HV = 45.0 * 1000 ; // converting MJ/kg to kJ/kg
	
	float mass_water = 0.0;
	float change_in_temp = 0.0;
	float mass_gas = 0.0;
	
	float energy_in = 0.0;
	float energy_out = 0.0;
	float efficiency = 0.0;
	
	//Taking in the input:
	cout << "What is the mass of the water needed to be heated? (in kg) ";
	cin >> mass_water;
	
	cout << "What is the change in temperature? (in celsius) ";
	cin >> change_in_temp;
	
	cout << "What is the mass of the natural gas needed to heat the water? (in kg) ";
	cin >> mass_gas;
	
	//Calculating efficiency:
	energy_out = mass_water*c_p*change_in_temp;
	energy_in = mass_gas*HV;
	efficiency = energy_out/energy_in;
	
	//Printing output:
	cout << "The efficiency of the water heater is " << efficiency;
	return 0;
}

/*

PEER AKNOWLEDGEMENT: Tejas


TEST 1:

What is the mass of the water needed to be heated? (in kg) 100
What is the change in temperature? (in celsius) 60
What is the mass of the natural gas needed to heat the water? (in kg) 0.8
The efficiency of the water heater is 0.7
--------------------------------
Process exited after 8.094 seconds with return value 0
Press any key to continue . . .

TEST 2:

What is the mass of the water needed to be heated? (in kg) 10.5
What is the change in temperature? (in celsius) 21.5
What is the mass of the natural gas needed to heat the water? (in kg) 0.05
The efficiency of the water heater is 0.4214
--------------------------------
Process exited after 9.236 seconds with return value 0
Press any key to continue . . .

*/
