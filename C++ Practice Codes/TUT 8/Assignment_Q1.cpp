// Diana & Chaitanya

#include <iostream>
using namespace std;

int main() {
    int m;
	int n;

    cout << "Enter order of f(x): ";
    cin >> m;

    double* f = new double[m + 1];
    cout << "Enter " << m + 1 << " coefficients for f(x): ";
    for (int index_f = 0; index_f <= m; index_f++) {
        cin >> f[index_f];
    }

    cout << "Enter order of g(x): ";
    cin >> n;

    double* g = new double[n + 1];
    cout << "Enter " << n + 1 << " coefficients for g(x): ";
    for (int index_g = 0; index_g <= n; index_g++) {
        cin >> g[index_g];
    }

    double* product = new double[m + n + 1];


    for (int index_p = 0; index_p <= m + n; index_p++)
    {
    	product[index_p] = 0;	
	}
        

    for (int index_f = 0; index_f <= m; index_f++) 
	{
        for (int index_g = 0; index_g <= n; index_g++) 
		{
            product[index_f + index_g] += f[index_f] * g[index_g];
        }
    }

    cout << endl << "Product polynomial coefficients:" << endl;
    for (int index_p = 0; index_p <= m + n; index_p++) {
        cout << product[index_p] << " ";
    }
    cout << endl;
    
    delete[] f;
    delete[] g;
    delete[] product;

    return 0;
}

/*

Test Case 1:

Enter order of f(x): 2
Enter 3 coefficients for f(x): 1 2 3
Enter order of g(x): 1
Enter 2 coefficients for g(x): 4 5

Product polynomial coefficients:
4 13 22 15

--------------------------------
Process exited after 11.01 seconds with return value 0
Press any key to continue . . .


Test Case 2:

Enter order of f(x): 3
Enter 4 coefficients for f(x): 2 0 -1 4
Enter order of g(x): 2
Enter 3 coefficients for g(x): 3 -5 2

Product polynomial coefficients:
6 -10 1 17 -22 8

--------------------------------
Process exited after 23.54 seconds with return value 0
Press any key to continue . . .

*/