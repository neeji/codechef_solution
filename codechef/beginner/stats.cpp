#include <bits/stdc++.h>
using namespace std;
int main()

{
    int a;
    cin >> a;
    while (a--)
    {
        int size, def;
        double k = 0;
        cin >> size >> def;

        int array[size];
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        sort(array, array + size);

        for (int i = def; i < size - def; i++)
            k += array[i];

        k = k / (size - def - def);

        cout << fixed << setprecision(6) << k << endl;
    }
    return 0;
}