#include <iostream>
#include <stack>
#include <cstring>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    string expr;
    stack<char> main;
    stack<char> op;
    stack<char> temp;
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        cin >> expr;
        for (int i = 0; i < expr.length(); i++)
        {
            if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/' || expr[i] == '^')
            {
                op.push(expr[i]);
            }
            else if (expr[i] != ')')
            {
                main.push(expr[i]);
            }
            else
            {
                temp.push(op.top());
                op.pop();
                while (main.top() != '(')
                {
                    temp.push(main.top());
                    main.pop();
                }
                main.pop();
                while (!temp.empty())
                {
                    main.push(temp.top());
                    temp.pop();
                }
            }
        }
        while (!main.empty())
        {
            temp.push(main.top());
            main.pop();
        }
        while (!temp.empty())
        {
            cout << temp.top();
            temp.pop();
        }
        cout << endl;
    }
    return 0;
}