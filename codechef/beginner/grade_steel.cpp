#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t;
    cin >> t;
    int hardness;
    double carbon;
    int tensile_strength;
    while (t--)
    {
        cin >> hardness >> carbon >> tensile_strength;
        if (hardness > 50 && carbon < 0.7 && tensile_strength > 5600)
        {
            cout << "10";
        }
        else if (hardness > 50 && carbon < 0.7)
        {
            cout << "9";
        }
        else if (carbon < 0.7 && tensile_strength > 5600)
        {
            cout << "8";
        }
        else if (tensile_strength > 5600 && hardness > 50)
        {
            cout << "7";
        }
        else if (hardness > 50 || tensile_strength > 5600 || carbon < 0.7)
        {
            cout << "6";
        }
        else
        {
            cout << "5";
        }
        cout << endl;
    }
    return 0;
}
/*
Hardness must be greater than 50.
Carbon content must be less than 0.7.
Tensile strength must be greater than 5600.


The grades are as follows:
Grade is 10 if all three conditions are met.
Grade is 9 if conditions (i) and (ii) are met.
Grade is 8 if conditions (ii) and (iii) are met.
Grade is 7 if conditions (i) and (iii) are met.
Garde is 6 if only one condition is met.
Grade is 5 if none of three conditions are met.
*/