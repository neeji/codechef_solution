#include <iostream>
#include <unordered_map>
#include <cstring>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    unordered_map<char, bool> dic;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        dic[s[i]] = true;
    }
    int n;
    cin >> n;
    while (n--)
    {
        int i;
        string temp;
        cin >> temp;
        int l = temp.length();
        for (i = 0; i < l; i++)
        {
            if (dic.find(temp[i]) == dic.end())
            {
                cout << "No" << endl;
                break;
            }
        }
        if (i == l)
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}