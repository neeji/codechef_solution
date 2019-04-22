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
    cin >> expr;
    stack<char> main;
    stack<char> op;
    stack<char> temp;
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '+' || expr[i] == '-' || expr[i] == '/' || expr[i] == '*')
        {
            op.push(expr[i]);
        }
        else if (expr[i] != ')')
        {
            main.push(expr[i]);
        }
        else
        {
            while (main.top() != '(')
            {
                temp.push(main.top());
                main.pop();
            }
            main.pop();
            temp.push(op.top());
            op.pop();
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
    // while (!temp.empty())
    // {
    //     main.push(temp.top());
    //     temp.pop();
    // }
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }

    return 0;
}