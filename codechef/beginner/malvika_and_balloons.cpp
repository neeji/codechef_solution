#include<iostream>
#include<cstring>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t;
    cin>>t;
    int a,b;
    while(t--){
        a=b=0;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i] =='a'){
                a++;
            }else{
                b++;
            }
        }
        cout<<min(a,b)<<endl;
    }
    return 0;
}