#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int test_cases;
    int n;
    cin >> test_cases;
    while (test_cases--)
    {
        cin >> n;
        cout << (n / 2) + 1 << endl;
    }
    return 0;
}