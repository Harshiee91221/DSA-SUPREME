#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a[3][3];
    int mini = INT_MAX;
    cout << "ENTER ARRAY : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] < mini)
            {
                mini = a[i][j];
            }
        }
    }
    cout << mini << endl;
}