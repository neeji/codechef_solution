#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int count = 1;
        for (int i = 0; i < n; i++)
        {
            if ('A' <= s[i] <= 'Z')
                count = 0;
            else
            {
                count = 1;
                break;
            }
        }
        if (2 <= n <= 100 && count == 0)
        {
            if (s[0] == s[1])
                cout << "NO\n";
            else
            {
                int flag = 1;
                for (int i = 2; i < n - 1; i += 2)
                {
                    if (s[0] == s[i] && s[1] == s[i + 1])
                        flag = 1;
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
                if (flag == 1)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
        }
    }
    // your code goes here
    return 0;
}