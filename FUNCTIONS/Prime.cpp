#include <iostream>
using namespace std;
bool isprime(int n)
{
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    if (isprime(n))
    {
        cout << "NOT PRIME" << endl;
    }
    else
    {
        cout << "PRIME" << endl;
    }
}