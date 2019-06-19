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
        int r, c;
        cin >> r >> c;
        int arr[1000][1000] = {0};
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> arr[i][j];
            }
        }
        int flag = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if ((i == 0 && j == 0) || (i == 0 && j == c - 1) || (i == r - 1 && j == 0) || (i == r - 1 && j == c - 1))
                {
                    if (arr[i][j] >= 2)
                    {
                        // cout << 1 << arr[i][j] << " " << i << j;
                        flag = 1;
                        break;
                    }
                }
                else if (i == 0 || i == r - 1)
                {
                    if (arr[i][j] >= 3)
                    {
                        // cout << 11;
                        flag = 1;
                        break;
                    }
                }
                else if (j == 0 || j == c - 1)
                {
                    if (arr[i][j] >= 3)
                    {
                        // cout << 11;
                        flag = 1;
                        break;
                    }
                }
                else
                {
                    if (arr[i][j] >= 4)
                    {
                        // cout << 11;
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 1)
        {
            cout << "Unstable";
        }
        else
        {
            cout << "Stable";
        }
        cout << "\n";
    }
    return 0;
}

// 2
// 3 3
// 1 2 1
// 2 3 2
// 1 2 1
// 3 4
// 0 0 0 0
// 0 0 0 0
// 0 0 4 0