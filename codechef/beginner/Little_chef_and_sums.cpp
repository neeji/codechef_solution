#include<bits/stdc++.h>
using namespace std;


int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> arr(n);
		int index = 0;
		long long pre_sum = 0,suf_sum=0,lowest = 0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			suf_sum += arr[i];
		}
		pre_sum = arr[0];
		lowest = pre_sum + suf_sum;
		index = 0;
		for(int i=1;i<n;i++){
			suf_sum = suf_sum - arr[i-1];
			pre_sum = pre_sum + arr[i];
			if(lowest > (suf_sum + pre_sum)){
				lowest = pre_sum + suf_sum;
				index = i;
			}
		}
		cout<<index+1<<endl;
	}
	return 0;
}