#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
void check_set_bits(int n, int &count)
{
    int x = 1;
    for (int i = 0; i < 32; i++)
    {
        if (n & x)
        {
            count++;
        }
        x = x << 1;
    }
}
int main(void)
{
    int test_cases;
    cin >> test_cases;
    int n;
    int count;
    while (test_cases--)
    {
        count = 0;
        cin >> n;
        if (n < 2049)
        {
            check_set_bits(n, count);
        }
        else
        {
            while (n > 2048)
            {
                n = n - 2048;
                count++;
            }
            check_set_bits(n, count);
        }
        cout << count << endl;
    }

    return 0;
}