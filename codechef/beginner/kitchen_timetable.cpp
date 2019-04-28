#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t, n;
    int temp = 0;
    int prev;
    int happy;
    cin >> t;
    while (t--)
    {
        temp = happy = 0;
        cin >> n;
        ll *a = new ll[n];
        ll *b = new ll[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            prev = a[i];
            a[i] = a[i] - temp;
            temp = prev;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] <= a[i])
            {
                happy++;
            }
        }
        cout << happy << endl;
    }
    return 0;
}