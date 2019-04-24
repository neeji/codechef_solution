#include <iostream>
#include <iomanip>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int test_cases;
    cin >> test_cases;
    double quantity;
    double price;
    while (test_cases--)
    {
        cin >> quantity >> price;
        if (quantity > 1000)
        {
            cout << std::fixed << std::showpoint;
            cout << std::setprecision(6);
            cout << quantity * price * 0.9 << endl;
        }
        else
        {
            cout << std::fixed << std::showpoint;
            cout << std::setprecision(6);
            cout << quantity * price << endl;
        }
    }
    return 0;
}