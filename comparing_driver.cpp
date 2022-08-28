#include <iostream>
#include <vector>
using namespace std;

// Function Prototype
bool testPIN(const vector<int>, const vector<int>);

int main()
{
    //Declaring the values for the 3 vectors
   vector<int> pin1Vector = { 2, 4, 1, 8, 7, 9, 0 };
   vector<int> pin2Vector = { 2, 4, 6, 8, 7, 9, 0 };
   vector<int> pin3Vector = { 1, 2, 3, 4, 5, 6, 7 };

   // These statements will compare the vectors with each other
    if (testPIN(pin1Vector, pin2Vector))
        cout << "ERROR: pin1 and pin2 report to be the same.\n";
    else
        cout << "SUCCESS: pin1 and pin2 are different.\n";

    if (testPIN(pin1Vector, pin3Vector))
        cout << "ERROR: pin1 and pin3 report to be the same.\n";
    else
        cout << "SUCCESS: pin1 and pin3 are different.\n";

    if (testPIN(pin1Vector, pin1Vector))
        cout << "SUCCESS: pin1 and pin1 report to be the same.\n";
    else
        cout << "ERROR: pin1 and pin1 report to be different.\n";

    return 0;
}

//******************************************************************
// The following function accepts two int arrays. The arrays are   *
// compared. If they contain the same values, true is returned.    *
// If the contain different values, false is returned.             *
//******************************************************************

bool testPIN(const vector<int> custPIN, const vector<int> databasePIN)
{
    for (int index = 0; index < custPIN.size(); index++)
    {
        if (custPIN[index] != databasePIN[index])
            return false; // We've found two different values.
    }
    return true; // If we make it this far, the values are the same.
}
