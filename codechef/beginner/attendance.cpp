#include <iostream>
#include <map>
#include <vector>
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
        multimap<string, string> names;
        vector<string> unique_name;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string first, second;
            cin >> first >> second;
            unique_name.push_back(first);
            names.insert(make_pair(first, second));
        }
        for (auto itr = unique_name.begin(); itr != unique_name.end(); itr++)
        {
            if (names.count(*itr) == 1)
            {
                auto it = names.find(*itr);
                it->second = "";
            }
        }

        for (auto itr = unique_name.begin(); itr != unique_name.end(); itr++)
        {
            auto it = names.find(*itr);
            cout << it->first << " " << it->second << endl;
            names.erase(it);
        }
    }

    return 0;
}