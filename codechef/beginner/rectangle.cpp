#include <iostream>
#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t;
    cin >> t;
    int a, b, c, d;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        if ((a == b && c == d) || (a == c && b == d) || (a == d && b == c))
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