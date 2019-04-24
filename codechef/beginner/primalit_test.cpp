#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
bool check_prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main(void)
{
    int test_cases;
    cin >> test_cases;
    int n;
    while (test_cases--)
    {
        cin >> n;
        check_prime(n) ? cout << "yes" << endl : cout << "no" << endl;
    }
    return 0;
}