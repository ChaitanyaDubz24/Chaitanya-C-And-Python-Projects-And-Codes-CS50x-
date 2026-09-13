/*
 Chaitanya Dubey
*/

#include <iostream> //lets us use cout and cin

using namespace std;

int main()
{
	//Defining the variables:
	float c_p = 4.2;
	float HV = 45.0; 
	
	float mass_water = 100.0;
	float change_in_temp = 65-5;
	float energy_out = 0.0;
	float efficiency = 0.0;
	
	float mass_gas = 0.0;
	float cost_per_GJ = 2.25; 
	float total_J = 0.0;
	float total_cost = 0.0;
	
	//Taking in the input:
	cout << "What is the efficiency of the water heater? ";
	cin >> efficiency;
	
	//Calculating the mass of the natural gas:
	energy_out = mass_water*c_p*change_in_temp;
	mass_gas = energy_out/(efficiency*(HV * 1000)); // converting MJ/kg to kJ/kg
	
	//Calculating the total cost:
	total_J = mass_gas * (HV/1000); //MJ to GJ --> kg * GJ/kg (HV) --> kg cancels out
	total_cost = cost_per_GJ * total_J;
	
	
	//Printing the output:
	cout << "The mass of natural gas needed is " << mass_gas << " kg." << endl;
	cout << "The total cost of the natural gas is $ " << total_cost;
	
	return 0;
}

/*

TEST 1:

What is the efficiency of the water heater? 0.7
The mass of natural gas needed is 0.8 kg.
The total cost of the natural gas is $ 0.081
--------------------------------
Process exited after 4.913 seconds with return value 0
Press any key to continue . . .


TEST 2:

What is the efficiency of the water heater? 0.8
The mass of natural gas needed is 0.7 kg.
The total cost of the natural gas is $ 0.070875
--------------------------------
Process exited after 3.795 seconds with return value 0
Press any key to continue . . .


TEST 3:

What is the efficiency of the water heater? 0.9
The mass of natural gas needed is 0.622222 kg.
The total cost of the natural gas is $ 0.063
--------------------------------
Process exited after 3.664 seconds with return value 0
Press any key to continue . . .


TEST 4:

What is the efficiency of the water heater? 0.95
The mass of natural gas needed is 0.589474 kg.
The total cost of the natural gas is $ 0.0596842
--------------------------------
Process exited after 5.703 seconds with return value 0
Press any key to continue . . .


TEST 5:

What is the efficiency of the water heater? 0.99
The mass of natural gas needed is 0.565657 kg.
The total cost of the natural gas is $ 0.0572727
--------------------------------
Process exited after 4.126 seconds with return value 0
Press any key to continue . . .

*/
