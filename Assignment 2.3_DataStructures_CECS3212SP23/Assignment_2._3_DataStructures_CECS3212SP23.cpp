#include <iostream>

using namespace std;

//Arcadio Bastidas
//CECS 3212
//Assignment 2.3

//prototype
int getNumberEqual(const int x[], int n, int desiredValue);

int main()
{
    int anArray[10] = {1, 2, 4, 4, 5, 6, 7, 8, 9, 12};

    cout << "Number 4 is found " << getNumberEqual(anArray, 10, 4) << " times." << endl;

    cout << "Number 3 is found " << getNumberEqual(anArray, 10, 3) << " times." << endl;


    return 0;
}

//definition
int getNumberEqual(const int x[], int n, int desiredValue)

{
    int count = 0;
    if (n <= 0)
        return 0;
    else
    {
        if (x[n - 1] == desiredValue)
            count = 1;
        return getNumberEqual(x, n - 1, desiredValue) + count;
    } // end else
} // end getNumberEqual

// Demonstrate that this function is recursive by listing the criteria of a recursive solution and stating how the function meets each criterion
