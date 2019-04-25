#include <iostream>
#include <map>
#include <cstring>
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
        map<char, int, greater<int>> occur;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            occur[s[i]]++;
        }
        int max_c = 0;
        int total = 0;
        for (auto itr = occur.begin(); itr != occur.end(); itr++)
        {
            max_c = max(max_c, itr->second);
            total += itr->second;
        }
        // cout << max_c << " " << total - max_c << endl;
        if (max_c == total - max_c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        // cout << occur.begin()->second << endl;
        // int max_c = occur.begin()->second;
        // int check = 0;
        // auto itr = occur.begin();
        // itr++;
        // for (; itr != occur.end(); itr++)
        // {
        //     check += itr->second;
        // }
        // cout << occur.begin()->first << " " << max_c << " " << check << endl;
    }

    return 0;
}