#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;
void subsequence(char *a, char *out, int i = 0, int j = 0)
{
    if (a[i] == '\0')
    {
        out[j] = a[i];
        cout << out << "\n";
        return;
    }
    else
    {
        subsequence(a, out, i + 1, j);
        out[j] = a[i];
        subsequence(a, out, i + 1, j + 1);
    }
}
int main(void)
{
    fast();
    char a[100], out[100];
    cin >> a;
    subsequence(a, out);
    return 0;
}