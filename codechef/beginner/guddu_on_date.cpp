#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;
// map<ll, ll> rounds;
ll sum_digits(ll n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n % 10 + sum_digits(n / 10);
    }
}
// ll fill_rounds(ll n)
// {
//     if (rounds.find(n) != rounds.end())
//     {
//         return rounds[n];
//     }
//     else
//     {
//         ll temp = fill_rounds(n - 1) + 1;
//         while (1)
//         {
//             if (sum_digits(temp) % 10 == 0)
//             {
//                 break;
//             }
//             temp = temp + 1;
//             // }
//             // else
//             // {
//             //     rounds[i] = temp + 9;
//         }
//         rounds[n] = temp;
//         return temp;
//     }
// }
int main(void)
{
    fast();
    // rounds[0] = 10;
    // // int t;
    // // cin >> t;
    // // while (t--)
    // // {
    // ll n;
    // cin >> n;
    // fill_rounds(n);
    // cout << rounds[n] << endl;
    // for (auto it : rounds)
    // {
    //     cout << it.first << "  " << it.second << "\n";
    // }
    // // }
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string ans;
        ll sum = sum_digits(n) % 10;
        ans = to_string(n) + to_string((10 - sum) % 10);
        cout << ans << endl;
    }
    return 0;
}