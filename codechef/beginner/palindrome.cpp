#include <iostream>
#include <cstring>
#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
bool is_palin(string &s, int n, int i = 0)
{
    if (i == n / 2)
    {
        return true;
    }
    else
    {
        if (s[i] == s[n - i])
        {
            return is_palin(s, n, i + 1);
        }
        else
        {
            return false;
        }
    }
}
int main(void)
{
    int test_cases;
    cin >> test_cases;
    string n;
    while (test_cases--)
    {
        cin >> n;
        is_palin(n, n.length() - 1) ? cout << "wins" << endl : cout << "losses" << endl;
    }

    return 0;
}