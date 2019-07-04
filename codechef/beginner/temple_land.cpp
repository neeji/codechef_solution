#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;
int counter = 1;
bool can_build(vector<int> arr, int i, int n)
{

    if (i == (n - 1 - i))
    {
        if (arr[i] == ::counter)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if (arr[i] == ::counter && arr[n - i - 1] == ::counter)
    {
        ::counter++;
        return can_build(arr, i + 1, n);
    }
    else
    {
        return false;
    }
}

int main(void)
{
    fast();
    int s;
    cin >> s;
    while (s--)
    {
        ::counter = 1;
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n % 2 == 0)
        {
            cout << "no\n";
        }
        else
        {
            if (arr[0] != 1)
            {
                cout << "no\n";
            }
            else
            {
                bool check = can_build(arr, 0, n);
                if (check)
                {
                    cout << "yes\n";
                }
                else
                {
                    cout << "no\n";
                }
            }
        }
    }
    return 0;
}