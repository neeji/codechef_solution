#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int n;
        int count = 0;
        cin >> n;
        while (n > 0)
        {
            if (n >= 100)
            {
                // n = n - 100;
                // count++;
                count += (n / 100);
                n = n % 100;
            }
            else if (n >= 50)
            {
                // n = n - 50;
                // count++;
                count += (n / 50);
                n = n % 50;
            }
            else if (n >= 10)
            {
                // n = n - 10;
                // count++;
                count += (n / 10);
                n = n % 10;
            }
            else if (n >= 5)
            {
                // n = n - 5;
                // count++;
                count += (n / 5);
                n = n % 5;
            }
            else if (n >= 2)
            {
                // n = n - 2;
                // count++;
                count += (n / 2);
                n = n % 2;
            }
            else
            {
                // n = n - 1;
                // count++;
                count += (n / 1);
                n = n % 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}