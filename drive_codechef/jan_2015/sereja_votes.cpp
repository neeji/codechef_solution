#include<iostream>
#include<vector>
using namespace std;
int main()
{
    short t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> b;
        int temp,count=0;
        long sum=0; 
        
        for(int i=0;i<n;i++)
        {  cin>>temp;b.push_back(temp);
            if(temp==0)
                count++;
            sum+=temp;
                
        }
            if(sum>=100 && sum-n+count<100)
                cout<<"YES\n";
            else    
                cout<<"NO\n";
        
    }
}