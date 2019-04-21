#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
class winner
{
public:
    int w, score;
    winner(int a, int b)
    {
        w = a;
        score = b;
    }
    void print()
    {
        cout << w << " " << score << endl;
    }
};
int main(void)
{
    int test_cases;
    cin >> test_cases;
    int a, b, p1, p2;
    p1 = p2 = 0;
    winner w(0, 0);
    while (test_cases--)
    {
        cin >> a >> b;
        p1 += a;
        p2 += b;
        if (p1 - p2 > 0)
        {
            if (p1 - p2 > w.score)
            {
                w.w = 1;
                w.score = p1 - p2;
            }
        }
        else
        {
            if (p2 - p1 > w.score)
            {
                w.w = 2;
                w.score = p2 - p1;
            }
        }
    }
    w.print();
    return 0;
}