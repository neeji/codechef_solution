#include <iostream>
#include <map>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int winner = 0;
map<pair<ll, ll>, int> matches;

void turns(ll n, ll m)
{
    if (n < m)
    {
        swap(n, m);
    }
    if (m == 0 || n == 0)
    {
        return;
    }
    else
    {
        if (matches.find(make_pair(n, m)) != matches.end())
        {
            winner = winner + matches[make_pair(n, m)];
            return;
        }
        else
        {
            winner++;
            // cout << n << " " << m;
            turns(m, n % m);
        }
    }
}

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        winner = 1;
        ll n, m;
        cin >> n >> m;
        if (matches.find(make_pair(n, m)) == matches.end())
        {
            turns(n, m);
            matches[make_pair(n, m)] = winner;
        }
        else
        {
            winner = matches[make_pair(n, m)];
        }
        if (winner % 2 == 0)
        {
            cout << "Ari" << endl;
        }
        else if ((winner * winner) % 2 == 0)
        {
            cout << "Ari" << endl;
        }
        else
        {
            cout << "Rich" << endl;
        }
    }

    return 0;
}