#include <bits/stdc++.h>
using namespace std;


int main(void){
	ios_base::sync_with_stdio(false);
   	cin.tie(NULL);
   	cout.tie(NULL);

    int t,n;
    long long int k, ans;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int> time(n);
        vector<int> price(n);
        for(int i=0;i<n;i++){
            cin>>time[i];
        }
        for(int i=0;i<n;i++){
            cin>>price[i];
        }
        ans = (k/time[0]) * price[0];

        priority_queue<long long int> profit;
        profit.push(ans);
        for(int i=1;i<n;i++){
            ans = (k / time[i]) * price[i];
            if (profit.top() < ans){
                profit.pop();
                profit.push(ans);
            }
        }
        cout<<profit.top()<<endl;
    }   	
	return 0;
}