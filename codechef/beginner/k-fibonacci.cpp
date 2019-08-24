#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
unordered_map<int,long long> fib_table;
long long kfib(int n, int k){
	if(n <=k){
		return 1;
	}
	else if(fib_table.find(n) != fib_table.end()){
		return fib_table[n];
	}
	else{
		long long int ans = 0, temp = 0;
		for(int i=1;i<=k;i++){
			if(fib_table.find(n-i) != fib_table.end()){
				temp = fib_table[n-i];
			}
			else{
				temp = kfib(n-i,k)%mod;
				fib_table.insert(make_pair(n-i,temp));
			}
			ans = ans + temp;
			ans = ans % mod;
		}
		if(fib_table.find(n) == fib_table.end()){
			fib_table.insert(make_pair(n,ans));
		}
		return ans;
	}
}

int main(void) {
	// your code goes here
	int n,k,i,j;
	long long int num[200009],sum;
	scanf("%d %d",&n,&k);
	for(i=1;i<=k;i++)
    	num[i]=1;
	sum = k;
	j=1;
	for(i=k+1;i<=n;i++)
	{
	   num[i]=sum;
	   sum = sum*2 - num[j];
	   //if(sum>1000000007L)
	    sum = sum%1000000007L; 
	   j++;
	}
	num[n]=num[n]%1000000007L;
	printf("%lld",num[n]); 
	return 0;
}