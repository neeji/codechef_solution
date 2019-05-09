#include <iostream>
#include <vector>
#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
void reduce_to_one(vector<ll> &arr)
{
    if (arr.size() == 1)
    {
        return;
    }
    else
    {
        ll l = (arr[0] + arr[arr.size() - 1]) % 1000000007 + (arr[0] * arr[arr.size() - 1]) % 1000000007;
        l = l % 1000000007;
        arr.erase(arr.begin());
        arr.erase(arr.begin() + arr.size() - 1);
        arr.push_back(l);
        // cout << l << " ";
        reduce_to_one(arr);
    }
}
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 1; i <= n; i++)
        {
            arr[i - 1] = i;
        }
        reduce_to_one(arr);
        cout << arr[0] << endl;
    }

    return 0;
}