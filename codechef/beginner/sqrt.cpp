#include <iostream>
#include <cmath>
#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int test_cases;
    cin >> test_cases;
    int n;
    while (test_cases--)
    {
        cin >> n;
        cout << (int)sqrt(n) << endl;
    }
    return 0;
}