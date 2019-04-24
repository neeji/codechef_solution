#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r;
        cin >> r;
        int a1, a2, b1, b2, c1, c2;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

        bool x = (a1 - b1) * (a1 - b1) + (a2 - b2) * (a2 - b2) <= r * r;
        bool y = (c1 - b1) * (c1 - b1) + (c2 - b2) * (c2 - b2) <= r * r;
        bool z = (a1 - c1) * (a1 - c1) + (a2 - c2) * (a2 - c2) <= r * r;

        if ((x && y) || (y && z) || (x && z))
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
    return 0;
}