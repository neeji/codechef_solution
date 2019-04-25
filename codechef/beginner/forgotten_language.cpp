#include<iostream>
#include<unordered_map>
#include<cstring>
#include<vector>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t;
    cin>>t;
    int n,k,l;
    while(t--){
        cin>>n>>k;
        unordered_map<string,int>dic;
            vector<string> storage;
        for(int i=0;i<n;i++){
                string temp;
                cin>>temp;
                dic[temp]=0;
                storage.push_back(temp);
        }
        while(k--){
            cin>>l;
            for(int i=0;i<l;i++){
                string temp;
                cin>>temp;
                if(dic.find(temp)!= dic.end()){
                    dic[temp]++;
                }
            }
        }
        for(int i=0;i<storage.size();i++){
           if(dic[storage[i]]!=0){
               cout<<"YES ";
           }else{
               cout<<"NO ";
           }
        }
        cout<<endl;

    }
    
    return 0;
}