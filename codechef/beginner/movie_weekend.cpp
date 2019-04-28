#include <iostream>
#include <vector>
#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;

class movie
{
public:
    int product;
    int rating;
    int index;
    movie()
    {
        product = 0;
        rating = 0;
        index = -1;
    }
};

int main(void)
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        movie ans;
        cin >> n;
        vector<int> l(n);
        vector<int> r(n);
        for (int i = 0; i < n; i++)
        {
            cin >> l[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
        }
        for (int i = 0, temp = 0; i < n; i++)
        {
            temp = l[i] * r[i];
            if (temp > ans.product)
            {
                ans.product = temp;
                ans.rating = r[i];
                ans.index = i;
            }
            else if (temp == ans.product)
            {
                if (r[i] > ans.rating)
                {
                    ans.product = temp;
                    ans.rating = r[i];
                    ans.index = i;
                }
            }
        }
        cout << ans.index + 1 << endl;
    }

    return 0;
}