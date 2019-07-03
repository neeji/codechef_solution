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
    int t;
    cin >> t;
    while (t--)
    {
        double n, v1, v2;
        cin >> n >> v1 >> v2;
        bool ans = (((n * sqrt(2)) / v1) <= ((2 * n) / v2));
        if (ans)
        {
            cout << "Stairs\n";
        }else{
            cout<<"Elevator\n";
        }
    }
    return 0;
}