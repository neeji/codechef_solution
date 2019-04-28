#include <iostream>
#include <map>
#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t, n, m, k, temp;
    cin >> t;
    int t_i, u_u;
    while (t--)
    {
        multimap<int, bool> data;
        t_i = u_u = 0;
        cin >> n >> m >> k;
        for (int i = 0; i < m; i++)
        {
            cin >> temp;
            data.insert(make_pair(temp, true));
        }
        for (int i = 0; i < k; i++)
        {
            cin >> temp;
            data.insert(make_pair(temp, true));
        }
        for (int i = 1; i <= n; i++)
        {
            if (data.count(i) == 0)
            {
                u_u++;
            }
            else if (data.count(i) == 2)
            {
                t_i++;
            }
        }
        cout << t_i << " " << u_u << endl;
    }

    return 0;
}