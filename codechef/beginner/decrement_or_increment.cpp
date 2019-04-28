#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int n;
    cin >> n;
    if (n % 4 == 0)
    {
        cout << (n + 1);
        return 0;
    }
    else
    {
        cout << (n - 1);
    }
    return 0;
}