#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
void count_4(int n, int &count)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        if (n % 10 == 4)
        {
            count++;
        }
        count_4(n / 10, count);
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
        count_4(n, count);
        cout << count << endl;
    }
    return 0;
}