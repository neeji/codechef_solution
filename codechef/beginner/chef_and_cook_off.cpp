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
    int n;
    cin >> n;
    int sum = 0;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[5];
    }
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        switch (sum)
        {
        case 0:
            cout << "Beginner\n";
            break;
        case 1:
            cout << "Junior Developer\n";
            break;
        case 2:
            cout << "Middle Developer\n";
            break;
        case 3:
            cout << "Senior Developer\n";
            break;
        case 4:
            cout << "Hacker\n";
            break;
        default:
            cout << "Jeff Dean\n";
            break;
        }
    }
    return 0;
}