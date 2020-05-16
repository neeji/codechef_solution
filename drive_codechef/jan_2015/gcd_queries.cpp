#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b){
	if(b ==0){
		return a;
	}
	return gcd(b, a%b);
}

void _calculate_prefix(vector<int> arr, vector<int> &prefix){
	prefix[0] = arr[0];
	for(int i=1;i<arr.size();i++){
		prefix[i] = gcd(prefix[i-1], arr[i]);
	}
}

void _calculate_suffix(vector<int> arr, vector<int> &suffix){
	int n = arr.size();
	suffix[n-1] = arr[n-1];
	for (int i=n-2; i>=0;i--){
		suffix[i] = gcd(suffix[i+1], arr[i]);
	}
}

void calculate_suffix__prefix(vector<int> arr, vector<int> &prefix, vector<int> &suffix){
	_calculate_prefix(arr, prefix);
	_calculate_suffix(arr, suffix);
}

int main(void){
	ios_base::sync_with_stdio(false);
   	cin.tie(NULL);
   	cout.tie(NULL);

	int t;
	int l, r;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		vector<int> arr(n);
		vector<int> prefix(n), suffix(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		calculate_suffix__prefix(arr, prefix, suffix);
		for(int i=0;i<q;i++){
			cin>>l>>r;
			if(l==1) printf("%d\n",suffix[r]);
        	else if(r==n) printf("%d\n",prefix[l-2]);
        	else printf("%d\n",gcd(prefix[l-2],suffix[r]));
		}

	}
	return 0;
}