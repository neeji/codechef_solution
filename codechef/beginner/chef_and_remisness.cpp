#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int test_cases;
    cin >> test_cases;
    int a, b;
    while (test_cases--)
    {
        cin >> a >> b;
        cout << max(a, b) << " " << (a + b) << endl;
    }
    return 0;
}