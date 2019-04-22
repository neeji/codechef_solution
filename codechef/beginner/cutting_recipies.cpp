#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;

int euclid_gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return euclid_gcd(b, a % b);
    }
}
int main(void)
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int n, gcd = 0;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i == 0)
            {
                gcd = arr[i];
            }
            else
            {
                gcd = euclid_gcd(gcd, arr[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] / gcd << " ";
        }
        cout << endl;
    }
    return 0;
}