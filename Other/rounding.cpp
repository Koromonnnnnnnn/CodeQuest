#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <windows.h>
using namespace std;

int halfRound(int val, int dec)
{

    bool negative;

    if (val < 0)
    {
        negative = true;
    }
    else
    {
        negative = false;
    }

    int absoluteVal = abs(val);
    int remainder;
    int roundedVal;

    absoluteVal = absoluteVal * 10 ^ (dec);
    remainder = absoluteVal * 10 %10;


    if (remainder >= 5){
        roundedVal = ceil(val);
    }

    cout << roundedVal << endl;
    return roundedVal;
}