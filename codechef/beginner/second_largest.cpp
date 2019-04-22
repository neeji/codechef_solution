#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int test_cases;
    cin >> test_cases;
    int a, s, ss;
    while (test_cases--)
    {
        s = ss = INT32_MAX;
        int n = 3;
        while (n--)
        {
            cin >> a;
            if (s > a)
            {
                ss = s;
                s = a;
            }
            else
            {
                if (ss > a)
                {
                    ss = a;
                }
            }
        }
        cout << ss << endl;
    }
    return 0;
}