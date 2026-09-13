/*
 Chaitanya Dubey
*/

#include <iostream> //lets us use cout and cin
#include <cstdlib> //lets us use system("PAUSE") and EXIT_SUCCESS

using namespace std;

int main()
{
	int side_length = 0;
    cout << "What is the value of side length? ";
    cin >> side_length;

    cout << "The square of " << side_length
         << " is " << side_length*side_length << endl;

    cout << "& the cube of " << side_length
         << " is " << side_length*side_length*side_length << endl;
    
    // system("PAUSE");  // Only needed for UW computers
    return EXIT_SUCCESS;
}

/*

What is the value of side length? 5
The square of 5 is 25
& the cube of 5 is 125

--------------------------------
Process exited after 3.979 seconds with return value 0
Press any key to continue . . .

*/
