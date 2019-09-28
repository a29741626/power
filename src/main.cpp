#include <iostream>

// Specify the header filepath explicitly (bad)
#include "../headers/power.h"

/*
// Requires using a compiler option that specifies where the headers are located
#include "power.h"
*/

using std::cout;
using std::endl;

int main()
{
    cout << "power(2,10)   should return 1024       actually returns " << power(2,10)   << endl;
    cout << "power(-2,1)   should return -2         actually returns " << power(-2,1)   << endl;
    cout << "power(123,0)  should return 1          actually returns " << power(123,0)  << endl;
    cout << "power(-123,0) should return 1          actually returns " << power(-123,0) << endl;
    cout << "power(3,4)    should return 81         actually returns " << power(3,4)    << endl;
    cout << "power(2,16)   should return 65536      actually returns " << power(2,16)   << endl;
    cout << "power(2,31)   should return 2147483648 actually returns " << power(2,31)   << endl;

    return 0;
}
