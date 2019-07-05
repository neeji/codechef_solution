#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;
int convert_to_int(string s, int i)
{
    if (i < 0)
    {
        return 0;
    }
    int ans = (s[i] - '0') + convert_to_int(s, i - 1) * 10;
    return ans;
}
int main(void)
{
    fast();
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string a, b;
        cin >> a;
        cin.ignore();
        cin >> b;
        // cout << a << b << endl;
        string temp = "";
        int s_a = a.length();
        int s_b = b.length();
        if (s_a < s_b)
        {
            for (int i = 0; i < (s_b - s_a); i++)
            {
                temp = temp + '0';
            }
            temp = temp + a;
            a = temp;
        }
        else
        {
            for (int i = 0; i < (s_a - s_b); i++)
            {
                temp += '0';
            }
            temp = temp + b;
            b = temp;
        }
        // cout << a << " " << b << endl;
        // temp[a.length()] = '\0';
        for (int i = a.length() - 1; i >= 0; i--)
        {
            temp[i] = (char)('0' + (a[i] - '0' + b[i] - '0') % 10);
        }
        // for (int i = 0; i < temp.length(); i++)
        // {
        //     cout << temp[i];
        // }
        cout << convert_to_int(temp, temp.length() - 1) << "\n";
    }
    return 0;
}