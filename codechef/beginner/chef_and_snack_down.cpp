#include<bits/stdc++.h>
using namespace std;

int year[] = {2010, 2015, 2016, 2017, 2019};

bool in(int n){
	for(int  i=0;i<sizeof(year)/sizeof(int);i++){
		if( n == year[i]){
			return true;
		}
	}
	return false;
}

int main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		in(n)?cout<<"HOSTED":cout<<"NOT HOSTED";
		cout<<"\n";
	}
	return 0;
}