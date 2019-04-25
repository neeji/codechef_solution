#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll height = 0;
        ll sum = 0;
        for (ll i = 1;; i++)
        {
            sum += i;
            if (sum > n)
            {
                break;
            }
            height++;
        }
        cout << height << endl;
    }
    return 0;
}