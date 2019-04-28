#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.begin() + n);
        int flag = 0;
        if (arr[0] == 1)
        {
            // swap(arr[0], arr[n - 1]);
            flag = 1;
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0 && flag == 1)
            {
                // cout << arr[i] << " ";
                continue;
            }
            else
            {
                cout << arr[i] << " ";
            }
        }
        if (flag == 1)
        {
            cout << arr[0];
        }
        cout << endl;
    }

    return 0;
}