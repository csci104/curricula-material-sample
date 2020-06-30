#include <iostream>
#include "decimal.hpp"

using namespace std;

int main()
{
    Decimal<8> a("3.333333335");
    Decimal<8> b("-1231023");
    Decimal<8> c("4121");
    cout << b << ", " << c << endl;
    cout << b / c << endl;
    cout << c / b << endl;
    cout << b * c << endl;

    uint64_t x = 10000000000000;
    Decimal<8> y("100000.00000000");
    cout << x * x << endl;
    cout << y * y << endl;
}