#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int first, second;
    cin >> first >> second;
    if (first > second)
    {
        cout << first - second << endl;
    }
    else
    {
        cout << first + second << endl;
    }
    return 0;
}