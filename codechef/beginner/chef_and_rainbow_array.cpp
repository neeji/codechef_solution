#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        int x = n;
        while (x--)
        {
            cin >> ar[n - x - 1];
        }
        int flag = 0;
        x = 1;
        while (x <= (n / 2))
        {
            if ((ar[x - 1] == ar[n - x]) && (ar[x] == ar[x - 1] || ar[x] == ar[x - 1] + 1))
            {
                x++;
                continue;
            }

            else
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "no" << endl;
        else
        {
            if (ar[n / 2] == 7 && ar[0] == 1)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }
    return 0;
}