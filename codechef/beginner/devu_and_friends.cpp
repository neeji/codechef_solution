#include <iostream>
#include <map>
#include <unordered_set>
#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t, n;
    cin >> t;
    int temp;
    int ans = 0;
    while (t--)
    {
        cin >> n;
        // map<int, int> parties;
        unordered_set<int> days;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            days.insert(temp);
            // if (parties.find(temp) == parties.end())
            // {
            //     parties[temp] = 1;
            // }
            // else
            // {
            //     parties[temp]++;
            // }
        }
        // ans = n;

        // for (auto itr = days.begin(); itr != days.end(); itr++)
        // {
        //     if (parties[*itr] > 1)
        //     {
        //         ans = ans - parties[*itr] + 1;
        //     }
        // }
        // cout << ans << endl;
        cout << days.size() << endl;
    }
    return 0;
}