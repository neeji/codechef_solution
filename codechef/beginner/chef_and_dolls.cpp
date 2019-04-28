// #include <iostream>
// #include <map>

// #define ll long long
// #define ull unsigned long long
// #define ui unsigned int

// using namespace std;
// int main(void)
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, temp;
//         cin >> n;
//         map<int, bool> dolls;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> temp;
//             if (dolls.find(temp) != dolls.end())
//             {
//                 dolls.erase(temp);
//                 continue;
//             }
//             dolls[temp] = true;
//         }
//         for(auto itr=dolls.begin();itr != dolls.end();itr++){
//             cout<<itr->first<<endl;
//         }
//     }
//     return 0;
// }
#include<iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = 0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            ans = ans^temp;
        }
        cout<<ans<<endl;
    }
    return 0;
}