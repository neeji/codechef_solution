#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
void sum_of_digits(int n, int &ans)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        ans += n % 10;
        sum_of_digits(n / 10, ans);
    }
}
int main(void)
{
    int test_cases;
    int n;
    int ans;
    cin >> test_cases;
    while (test_cases--)
    {
        ans = 0;
        cin >> n;
        sum_of_digits(n, ans);
        cout << ans << endl;
    }
    return 0;
}