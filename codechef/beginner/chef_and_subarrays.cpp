#include <iostream>
#include<vector>
#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t;
    cin >> t;
    int n, count,sum,pro,temp;
    while (t--)
    {
        cin >> n;
        count = 0;
      vector<int> arr;
      for(int i=0;i<n;i++){
          cin>>temp;
          arr.push_back(temp);
      }
      for(int i=0;i<n;i++){
          sum = 0;
          pro = 1;
          for(int j=i;j>=0;j--){
              sum = sum + arr[j];
              pro = pro*arr[j];
              if(pro == sum){
                  count++;
              }
          }
      }
      cout<<count<<endl;
    }
    return 0;
}