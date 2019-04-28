#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int min = INT32_MAX;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        cout << min * (n - 1) << endl;
    }
    return 0;
}