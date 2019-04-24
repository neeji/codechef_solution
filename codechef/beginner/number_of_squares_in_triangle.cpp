#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int sum(int n, int m = 2)
{
    if (n <= m)
    {
        return 0;
    }
    return (n / m - 1) + sum(n - m);
}
int main(void)
{
    int test_cases;
    cin >> test_cases;
    int n;
    while (test_cases--)
    {
        cin >> n;
        cout << sum(n) << endl;
    }
    return 0;
}