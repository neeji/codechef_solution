#include <iostream>
#include <unordered_map>
#include <cstring>
#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t;
    cin >> t;
    int n, mx;
    while (t--)
    {
        unordered_map<char, int> conf;
        conf['R'] = 0;
        conf['G'] = 0;
        conf['B'] = 0;
        cin >> n;
        string color;
        cin >> color;
        for (int i = 0; i < color.length(); i++)
        {
            conf[color[i]]++;
        }
        mx = INT32_MIN;
        for (auto itr = conf.begin(); itr != conf.end(); itr++)
        {
            if (itr->second > mx)
            {
                mx = itr->second;
            }
            // total += itr->second;
        }
        cout << n - mx << endl;
    }

    return 0;
}