#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t;
    cin >> t;
    int count_0, count_1;
    cin.ignore();
    char ch;
    // cin.ignore();
    while (t--)
    {
        count_0 = count_1 = 0;
        while (1)
        {
            ch = cin.get();
            if (ch == '1')
            {
                count_1++;
            }
            else if (ch == '0')
            {
                count_0++;
            }
            else
            {
                break;
            }
        }
        if ((count_0 > 1 && count_1 > 1) || (count_1 > 1 && count_0 == 0) || (count_0 > 1 && count_1 == 0))
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}