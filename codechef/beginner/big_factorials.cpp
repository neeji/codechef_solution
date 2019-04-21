#include <iostream>
#include <vector>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    vector<int> fact;
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int n;
        cin >> n;
        fact.push_back(1);
        for (int i = 1; i <= n; i++)
        {
            int l = 0;
            for (int j = 0; j < fact.size(); j++)
            {
                int ans = fact[j] * i + l;
                fact[j] = ans % 10;
                l = ans / 10;
            }
            while (l != 0)
            {
                fact.push_back(l % 10);
                l = l / 10;
            }
        }
        //print the factorial
        for (int i = fact.size() - 1; i >= 0; i--)
        {
            cout << fact[i];
        }
        cout << endl;
        fact.clear();
    }
    return 0;
}