#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <numeric>
using namespace std;

int totalSand = 0;

int *GetBigInteger(string str)
{
    int x = str.size(), a = 0;

    int *arr = new int[str.size()];

    while (a != x)
    {
        arr[a] = str[a] - '0';
        a++;
    }

    return arr;
}

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
            string sandCount;
            cin >> sandCount;
            int *arr = GetBigInteger(sandCount);

            for (int i = 0; i < sizeof(arr); i++)
            {
                totalSand = totalSand += arr[i];
                cout << totalSand << endl; // for testing
            }
        }
        cout << totalSand << endl;
    }
    return 0;
}