/*
FUNCTION F( S - a valid parentheses sequence )
	BEGIN
		balance = 0
		max_balance = 0
		FOR index FROM 1 TO LENGTH(S)
		BEGIN
			if S[index] == '(' then balance = balance + 1
			if S[index] == ')' then balance = balance - 1
			max_balance = max( max_balance, balance )
		END
		RETURN max_balance
	END
*/
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;
int leng(string &s, int balance = 0, int max_balance = 0, int i = 0)
{
    if (s[i] == '\0')
    {
        return max_balance;
    }
    else
    {
        if (s[i] == '(')
        {
            balance++;
        }
        else if (s[i] == ')')
        {
            balance--;
        }
        max_balance = max(max_balance, balance);
        return leng(s, balance, max_balance, i + 1);
    }
}
int main(void)
{
    fast();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int out = leng(s);
        for (int i = 0; i < out; i++)
        {
            cout << '(';
        }
        for (int i = 0; i < out; i++)
        {
            cout << ')';
        }
        cout << "\n";
    }
    return 0;
}