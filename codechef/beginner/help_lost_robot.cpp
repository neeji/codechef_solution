#include<iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t;
    cin>>t;
    int x1,x2,y1,y2;
    while(t--){
        cin>>x1>>y1>>x2>>y2;
        if(x1-x2 !=0 && y1 - y2 != 0){
            cout<<"sad"<<endl;
        }else if(x1-x2 > 0 && y1 - y2 == 0 ){
            cout<<"left"<<endl;
        }else if(x1-x2 < 0 && y1 - y2 == 0 ){
            cout<<"right"<<endl;
        }else if(y1-y2 < 0 && x1 - x2 == 0 ){
            cout<<"up"<<endl;
        }else{
            cout<<"down"<<endl;
        }
    }
    return 0;
}