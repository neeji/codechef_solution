#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int test_cases;
    cin >> test_cases;
    int n;
    while (test_cases--)
    {
        cin >> n;
        if (n < 10)
        {
            cout << "What an obedient servant you are!" << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}