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
        char a;
        cin >> a;
        if (a == 'b' || a == 'B')
        {
            cout << "BattleShip" << endl;
        }
        else if (a == 'c' || a == 'C')
        {
            cout << "Cruiser" << endl;
        }
        else if (a == 'd' || a == 'D')
        {
            cout << "Destroyer" << endl;
        }
        else
        {
            cout << "Frigate" << endl;
        }
    }
    return 0;
}