#include <iostream>
#include <set>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t;
    cin >> t;
    int x, y, m;
    while (t--)
    {
        set<int> houses;
        cin >> m >> x >> y;
        int *cops = new int[m];
        int dist = x * y;
        for (int i = 0; i < m; i++)
        {
            cin >> cops[i];
            int minh = max(1, cops[i] - dist);
            int maxh = min(100, cops[i] + dist);
            for (int j = minh - 1; j < maxh; j++)
            {
                houses.insert(j);
            }
        }
        cout << 100 - houses.size() << endl;
    }
    return 0;
}