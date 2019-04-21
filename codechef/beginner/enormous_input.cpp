#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    ll n, k, temp, count = 0;
    cin >> n;
    cin >> k;
    while (n--)
    {
        cin >> temp;
        if (temp % k == 0)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}