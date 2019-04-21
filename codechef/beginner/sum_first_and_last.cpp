#include <iostream>
#include <cstring>
#define ll long long
#define ull unsigned long long
#define ui unsigned int
// 3
// 1234
// 124894
// 242323

using namespace std;
int main(void)
{
    int test_cases;
    cin >> test_cases;
    string n;
    int ans = 0;
    while (test_cases--)
    {
        cin >> n;
        ans = (n[0] - '0') + (n[n.length() - 1] - '0');
        cout << ans << endl;
    }
    return 0;
}