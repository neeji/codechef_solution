#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // your code goes here
    int test_cases, salary;
    double gross;
    cin >> test_cases;
    while (test_cases--)
    {
        cin >> salary;
        if (salary < 1500)
            gross = 2 * salary;
        else
            gross = 500 + (1.98 * salary);
        cout << setprecision(2) << fixed << gross << endl;
    }

    return 0;
}