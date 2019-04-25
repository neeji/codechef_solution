#include<iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int euclid_gcd(int a,int b){
    if(b == 0){
        return a;
    }else{
        return euclid_gcd(b,a%b);
    }
}
int main(void)
{
    int t;
    cin>>t;
    int length,breadth;
    int gcd = 0;
    while(t--){
        cin>>length>>breadth;
        gcd = euclid_gcd(length,breadth);
        gcd = gcd *gcd;
        cout<<length*breadth/gcd<<endl;
    }
    return 0;
}