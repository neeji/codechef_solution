/*

You are given a sequence of non-negative integers A1,A2,…,AN. At most once, you may choose a non-negative
 integer X and for each valid i, change Ai to Ai⊕X (⊕ denotes bitwise XOR).

Find the minimum possible value of the sum of all elements of the resulting sequence.

Input
The first line of the input contains a single integer T denoting the number of test cases.
 The description of T test cases follows.
The first line of the input contains a single integer N.
The second line contains N space-separated integers A1,A2,…,AN.
Output
For each test case, print a single line containing one integer ― the minimum possible sum.

Constraints
1≤T≤1,000
1≤N≤105
1≤Ai≤109 for each valid i
the sum of N over all test cases does not exceed 106
Subtasks
Subtask #1 (50 points):

1≤N≤103
1≤Ai≤103 for each valid i
Subtask #2 (50 points): original constraints

Example Input
3
5
2 3 4 5 6
4
7 7 7 7
3
1 1 3
Example Output
14
0
2
Explanation
Example case 1: If we choose X=6, the sequence becomes (4,5,2,3,0).

Example case 2: We can choose X=7 to make all elements of the resulting sequence equal to 0.

Example case 3: We can choose X=1. The sequence becomes (0,0,2), with sum 2.


*/

#include <iostream>
#include <unordered_set>
#include <vector>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t;
    cin >> t;
    int n;
    ll sum = 0;
    ll ans;
    while (t--)
    {
        ans = INT64_MAX;
        cin >> n;
        vector<ll> arr(n);
        unordered_set<ll> elements;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            elements.insert(arr[i]);
        }
        for (auto itr = elements.begin(); itr != elements.end(); itr++)
        {
            sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += arr[i] ^ *itr;
            }
            ans = min(ans, sum);
        }
        cout << ans << endl;
    }
    return 0;
}

/*
solution

 int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0;i < n; i++) cin >>a[i];
    ll ans=0;
    for (int bit = 0; bit < 30; bit++)
    {
      int cnt = 0;
      for (int i = 0; i < n; i++)
      {
        if ((a[i] >> bit) & 1)cnt++;
      }
      cnt=min(n-cnt,cnt);
      ans+=cnt*(ll)(1<<bit);
    }
    cout << ans << endl;
  }

  */