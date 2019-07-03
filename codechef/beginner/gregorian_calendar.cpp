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
    map<int, string> days;
    days[0] = "monday";
    days[1] = "tuesday";
    days[2] = "wednesday";
    days[3] = "thursday";
    days[4] = "friday";
    days[5] = "saturday";
    days[6] = "sunday";
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int year;
        cin >> year;
        if (year < 2001)
        {
            for (int i = year + 1; i <= 2001; i++)
            {
                if (i % 100 != 0)
                {
                    if (i % 4 == 0)
                    {
                        count += 2;
                    }
                    else
                    {
                        count++;
                    }
                }
                else
                {
                    if (i % 4 == 0)
                    {
                        count += 2;
                    }
                    else
                    {
                        count++;
                    }
                }
            }
            count = count % 7;
            count = 7 - count;
            cout << days[count] << endl;
        }
        else if (year == 2001)
        {
            count = 0;
            cout << days[count] << endl;
        }
        else
        {
            for (int i = 2001; i < year; i++)
            {
                if (i % 100 == 0)
                {
                    if (i % 4 == 0)
                    {
                        count += 2;
                    }
                    else
                    {
                        count++;
                    }
                }
                else
                {
                    if (i % 4 == 0)
                    {
                        count += 2;
                    }
                    else
                    {
                        count++;
                    }
                }
            }
            count = count % 7;
            cout << days[count] << endl;
        }
    }
    return 0;
}