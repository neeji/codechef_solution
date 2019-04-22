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
        int n;
        cin >> n;
        int **arr = new int *[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = new int[n];
        }
        // int arr[n][n] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = n - 1; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[i][j] > arr[i][j + 1])
                {
                    arr[i - 1][j] = arr[i - 1][j] + arr[i][j];
                }
                else
                {
                    arr[i - 1][j] = arr[i - 1][j] + arr[i][j + 1];
                }
            }
        }
        cout << arr[0][0] << endl;
    }
    return 0;
}