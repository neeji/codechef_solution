#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y)
{
    if (x.second != y.second)
        return x.second < y.second;
    return x.first < y.first;
}

int main(void){
	ios_base::sync_with_stdio(false);
   	cin.tie(NULL);
   	cout.tie(NULL);

   	int t;
   	cin>>t;
   	while(t--){
   		int n, l, r;
   		cin>>n;
   		vector<pair<int, int>> kingdoms(n);
   		for(int i=0;i<n;i++){
   			cin>>l>>r;
   			kingdoms[i] = make_pair(l, r);
   		}
   		sort(kingdoms.begin(), kingdoms.end(), cmp);
   		// for(int i=0;i<n;i++){
   		// 	cout<<kingdoms[i].first<<' '<<kingdoms[i].second<<endl;
   		// }
   		int count = 1;
   		int x = kingdoms[0].second;
   		for(int i=0;i<n;i++){
   			if (kingdoms[i].first > x){
   				count++;
   				x = kingdoms[i].second;
   			}
   		}
   		cout<<count<<endl;
   	}
	return 0;
}