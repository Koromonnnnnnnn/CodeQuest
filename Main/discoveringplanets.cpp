#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

bool presenceOfWater = false;
bool presenceMagneticField = false;
double temperature = 0;
double eccentricityPlanetOrbit = 0;

int main()
{
    int testCases;
    cin >> testCases;
    string dummy;
    getline(cin, dummy);
    for (int testcase = 0; testcase < testCases; testcase++)
    {
        string text;
        getline(cin, text);
        cout << text << '\n';
    }
}