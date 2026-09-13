// Viyasan & Chaitanya

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// Defining the variables:
    double cAngle = 0.0; //contained_angle
    double side1 = 0;
    double side2 = 0;

    cout << "Enter two adjacent sides and a contained angle: ";
    cin >> side1 >> side2 >> cAngle;

    double sDifference = side1 - side2;
    bool tolSides = fabs(sDifference) <= 0.1;

    if (cAngle <= 0 || cAngle >= 180) 
	{
        cout << "Invalid data out of range";
    }
    
    else
	{
        if (cAngle >= 89.5 && cAngle <= 90.5)
		{
            if (tolSides == 1) //1 means it's true
            {
                cout << "The paving stone is a square";
            }
            
            else 
			{
                cout << "The paving stone is a rectangle";
            }
        }
        
        else 
		{
            cout << "The paving stone is a parallelogram";
        }
    }
    
    return 0;
}

/*

Test Case 1: (Invalid Data)

Enter two adjacent sides and a contained angle: 8.3 6.4 180
Invalid data out of range
--------------------------------
Process exited after 8.016 seconds with return value 0
Press any key to continue . . .


Test Case 2: (sides and angle in the tolerance range)

Enter two adjacent sides and a contained angle: 5 4.901 89.501
The paving stone is a square
--------------------------------
Process exited after 13.81 seconds with return value 0
Press any key to continue . . .


Test Case 3: (angle not in the tolerance range but sides are)

Enter two adjacent sides and a contained angle: 5 4.901 89.49
The paving stone is a parallelogram
--------------------------------
Process exited after 17.25 seconds with return value 0
Press any key to continue . . .


Test Case 4: (sides not in tolerance range but angle is)

Enter two adjacent sides and a contained angle: 5 4.8 89.501
The paving stone is a rectangle
--------------------------------
Process exited after 12.59 seconds with return value 0
Press any key to continue . . .


Test Case 5: (sides and angel not in the tolerance range)

Enter two adjacent sides and a contained angle: 5 5.101 30
The paving stone is a parallelogram
--------------------------------
Process exited after 15.36 seconds with return value 0
Press any key to continue . . .

*/
