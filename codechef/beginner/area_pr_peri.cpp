#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;
int main(void)
{
    fast();
    int l, b;
    cin >> l >> b;
    ll area, peri;
    area = l * b;
    peri = 2 * (l + b);
    if (area == peri)
    {
        cout << "Eq"
             << "\n"
             << area << "\n";
    }
    else
    {
        if (area > peri)
        {
            cout << "Area"
                 << "\n"
                 << area << "\n";
        }
        else
        {
            cout << "Peri"
                 << "\n"
                 << peri << "\n";
        }
    }
    return 0;
}