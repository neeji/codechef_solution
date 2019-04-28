#include <iostream>
#include <cstring>
#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t;
    cin >> t;
    int mini, com;
    while (t--)
    {
        string s1, s2;
        mini = com = 0;
        cin >> s1 >> s2;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] != '?' && s2[i] != '?')
            {
                if (s1[i] != s2[i])
                {
                    mini++;
                }
                else
                {
                    com++;
                }
            }
        }
        cout << mini << " " << s1.length() - com << endl;
    }

    return 0;
}