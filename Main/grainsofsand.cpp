#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int totalSand = 0;

int main()
{
    int testCases;
    int teamNum;
    cin >> testCases;
    cin >> teamNum;
    string dummy;
    getline(cin, dummy);
    for (int testcase = 0; testcase < testCases; testcase++)
    {
        for (int teamNums = 0; teamNums < teamNum; teamNums++)
        {
            long long sandCount;
            cin >> sandCount;
            totalSand += sandCount;
        }
        cout << totalSand << endl;
    }
    return 0;
}