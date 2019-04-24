#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
long long euclid_gcd(long long a, long long b)
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
    long long test_cases;
    cin >> test_cases;
    long long a, b, gcd;
    while (test_cases--)
    {
        cin >> a >> b;
        gcd = euclid_gcd(a, b);
        cout << gcd << " " << (a * b) / gcd << endl;
    }
    return 0;
}