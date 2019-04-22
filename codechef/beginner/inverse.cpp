#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int n, i;
    while (1)
    {
        cin >> n;
        if (n == 0)
        {
            return 0;
        }
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
        {
            if (arr[arr[i] - 1] != i + 1)
            {
                cout << "not ambiguous" << endl;
                break;
            }
        }
        if (i == n)
        {
            cout << "ambiguous" << endl;
        }
    }
    return 0;
}