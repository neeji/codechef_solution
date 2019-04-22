#include <iostream>
#include <vector>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    vector<int> ans;
    int test_cases;
    cin >> test_cases;
    int n;
    while (test_cases--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            int l = 0;
            for (int j = 0; j < ans.size(); j++)
            {
                ans[j] = ans[j] * i + l;
                l = ans[j] / 10;
                ans[j] = ans[j] % 10;
            }
            while (l)
            {
                ans.push_back(l % 10);
                l = l / 10;
            }
        }
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            cout << ans[i];
        }
        cout << endl;
        ans.clear();
    }
    return 0;
}