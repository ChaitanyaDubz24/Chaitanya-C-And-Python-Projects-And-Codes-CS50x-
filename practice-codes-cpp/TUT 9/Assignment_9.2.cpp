//Celina Wang & Chaitanya Dubey

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Computer 
{
	
private:
    string id;
    double temps[32];
    int malfunctionCount;

    void processTemp(int idx, double t) 
	{
        if (t < 0) 
		{
            temps[idx] = -1;
            malfunctionCount++;
        } 
		
		else 
		{
            temps[idx] = t;
        }
    }

public:
    Computer() 
	{
        id = "";
        malfunctionCount = 0;
        for (int i = 0; i < 32; i++)
		{
			temps[i] = -1;
		}
    }

    
    void loadData(string compID, ifstream &fin) 
	{
        id = compID;
        malfunctionCount = 0;
        double t;

        for (int i = 0; i < 32; i++) 
		{
            fin >> t;
            processTemp(i, t);
        }
    }

    string getID() const 
	{ 
		return id; 
	}

    double getAverage() const 
	{
        double sum = 0;
        for (int i = 0; i < 32; i++)
		{
			sum += temps[i];
		} 
		
		double average_sum = sum / 32.0;
		
		return average_sum;
    }

    bool isHeavilyLoaded() const 
	{
		bool isComputerHL = getAverage() > 50;
        return isComputerHL;
    }

    string getCondition() const 
	{
        if (malfunctionCount == 0)
		{
        	return "normal";
		} 
		
        else if (malfunctionCount <= 5)
		{
			return "marginal";
		}
		 
        else
		{
			return "malfunctioning";
		} 
    }
};

int main() 
{
    Computer comps[15];

    ifstream fin("computers.txt");
    
    if (!fin) {
        cout << "Sorry! Couldn't open/locate the requested file.";
        return 1;
    }

    for (int i = 0; i < 15; i++)
	{
        string cid;
        fin >> cid;
        comps[i].loadData(cid, fin);
    }
    
    fin.close();

    int heavy = 0;
    for (int i = 0; i < 15; i++) 
	{
        if (comps[i].isHeavilyLoaded())
        {
        	heavy++;
		}  
    }

    cout << "No.of heavily loaded computers: " << heavy << endl << endl;

    for (int i = 0; i < 15; i++) 
	{
        cout << comps[i].getID() << ": " << comps[i].getCondition() << endl;
    }

    return 0;
}

/*

OUTPUT:

No.of heavily loaded computers: 12

6FQPU6: marginal
PYBBEN: marginal
0UBZNF: normal
O1598U: normal
BKU9CF: malfunctioning
NCLK3F: normal
3GTR95: normal
HX6BD2: normal
PZ2ZRR: normal
N6ZP8U: normal
U8KPXR: normal
UJOL27: normal
OK7NPD: normal
JMMRZA: normal
BZ5BR6: normal

--------------------------------
Process exited after 0.06666 seconds with return value 0
Press any key to continue . . .

*/
