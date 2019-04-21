#include <iostream>
#include <cstring>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
void reverse(int n, int &ans)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        ans *= 10;
        ans += n % 10;
        reverse(n / 10, ans);
    }
}
int main(void)
{
    int test_cases;
    cin >> test_cases;
    int n;
    int ans;
    while (test_cases--)
    {
        ans = 0;
        cin >> n;
        reverse(n, ans);
        cout << ans << endl;
    }

    return 0;
}
// int main(void)
// {
//     int test_cases;
//     cin >> test_cases;
//     string n;
//     int length;
//     while (test_cases--)
//     {
//         cin >> n;
//         length = n.length();
//         for (int i = 0; i < length / 2; i++)
//         {
//             swap(n[i], n[length - 1 - i]);
//         }
//         cout << n << endl;
//     }
//     return 0;
// }