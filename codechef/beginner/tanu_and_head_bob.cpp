#include <iostream>
#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int test_cases;
    cin >> test_cases;
    int n, i;
    char exp[10000];
    while (test_cases--)
    {
        cin >> n;
        cin.ignore();
        cin >> exp;
        for (i = 0; i < n; i++)
        {
            // cin >> exp[i];
            if (exp[i] == 'I')
            {
                cout << "INDIAN" << endl;
                break;
            }
            else if (exp[i] == 'Y')
            {
                cout << "NOT INDIAN" << endl;
                break;
            }
        }
        if (i == n)
        {
            cout << "NOT SURE" << endl;
        }
    }

    return 0;
}