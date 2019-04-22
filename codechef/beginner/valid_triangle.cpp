#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int test_cases;
    cin >> test_cases;
    int a, b, c;
    while (test_cases--)
    {
        cin >> a >> b >> c;
        if (a + b + c == 180)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}