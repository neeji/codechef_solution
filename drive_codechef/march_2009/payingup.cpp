#include <bits/stdc++.h>
using namespace std;


/*	ALGO
	if sum is 0 then return true
	if index is >= n return flase
	if sum <0 return false
	recursive call for include
	recursive call for exclude
	return include || exclude
*/

class Solution
{
	public:
	bool sum_exist(vector<int> notes, int m, int i=0){
		if (m == 0)
			return true;

		if (i >= notes.size())
			return false;

		bool include_element_in_sum = sum_exist(notes, m - notes[i], i+1);
		bool exclude_element_from_sum = sum_exist(notes, m, i+1);

		return include_element_in_sum || exclude_element_from_sum;
	}
};

int main(void){
	ios_base::sync_with_stdio(false);
   	cin.tie(NULL);
	int t, n, m;
	Solution s;
	cin>>t;
	while(t--){
		cin>>n>>m;
		vector<int> notes(n, 0);
		for(int i=0;i<n;i++){
			cin>>notes[i];
		}
		s.sum_exist(notes, m)?cout<<"Yes":cout<<"No";
		cout<<endl;
	}

	return 0;
}