#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, m, tmp;
    while (t--)
    {
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            a.push_back(tmp);
        }
        cin >> m;
        vector<int> b;
        for (int i = 0; i < m; i++)
        {
            cin >> tmp;
            b.push_back(tmp);
        }
        bool check = 0;
        int j = 0;
        for (int i = 0; i < n and !check; i++)
        {
            if (a[i] == b[j])
                j++;
            if (j == m)
                check = true;
        }
        if (check)
            cout << "Yes";
        else
            cout << "No";
        cout << "\n";
    }
    return 0;
}