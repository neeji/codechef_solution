#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;
void copy(char *a, char *b)
{
    int i = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i];
    }
    b[i] = a[i];
}
int main(void)
{
    fast();
    pair<pair<int, char[3]>, pair<int, char[3]>> p[4];
    /*
    3UB   |  6UB  
    2MB   |  5MB  
    1LB   |  4LB  
    7SL   |  8SU  */
    p[0].first.first = 1;
    // strncpy("LB", p[0].first.second, 2);
    p[0].first.second[0] = 'L';
    p[0].first.second[1] = 'B';
    p[0].first.second[2] = '\0';
    // strncpy("LB", p[0].second.second, 2);
    p[0].second.second[0] = 'L';
    p[0].second.second[1] = 'B';
    p[0].second.second[2] = '\0';
    p[0].second.first = 4;
    p[1].first.first = 2;
    // strncpy("MB", p[1].first.second, 2);
    p[1].first.second[0] = 'M';
    p[1].first.second[1] = 'B';
    p[1].first.second[2] = '\0';
    p[1].second.second[0] = 'M';
    p[1].second.second[1] = 'B';
    p[1].second.second[2] = '\0';
    // strncpy("MB", p[1].second.second, 2);
    p[1].second.first = 5;
    p[2].first.first = 3;
    // strncpy("UB", p[2].first.second, 2);
    p[2].first.second[0] = 'U';
    p[2].first.second[1] = 'B';
    p[2].first.second[2] = '\0';
    p[2].second.second[0] = 'U';
    p[2].second.second[1] = 'B';
    p[2].second.second[2] = '\0';
    // strncpy("UB", p[2].second.second, 2);
    p[2].second.first = 6;
    p[3].first.first = 7;
    // strncpy("SL", p[3].first.second, 2);
    p[3].first.second[0] = 'S';
    p[3].first.second[1] = 'L';
    p[3].first.second[2] = '\0';
    p[3].second.second[0] = 'S';
    p[3].second.second[1] = 'U';
    p[3].second.second[2] = '\0';
    // strncpy("SU", p[3].second.second, 2);
    p[3].second.first = 8;
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        int n = num;
        n = n % 8;
        if (n == 0)
        {
            n = 8;
        }
        char berth[3];
        for (int i = 0; i < 4; i++)
        {
            if (p[i].first.first == n)
            {
                // strcpy(p[i].second.second, berth);
                copy(p[i].second.second, berth);
            }
            else if (p[i].second.first == n)
            {
                // strcpy(p[i].first.second, berth);
                copy(p[i].first.second, berth);
            }
        }

        if (n == 1 || n == 2 || n == 3)
        {
            num = num + 3;
        }
        else if (n == 4 || n == 5 || n == 6)
        {
            num = num - 3;
            // cout << num << endl;
        }
        else if (n == 7)
        {
            num++;
        }
        else if (n == 8)
        {
            num--;
        }

        cout << num << berth << endl;
    }
    return 0;
}