#include <iostream>
#include <algorithm>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        int *arr = new int[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        cout << arr[0] + arr[1] << endl;
    }
    return 0;
}