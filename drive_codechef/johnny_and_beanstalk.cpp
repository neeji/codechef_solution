#include<bits/stdc++.h>
using namespace std;


int main(void){
    int T;
    cin>>T;
    while(T--){
        long long int leafs=1,number_of_leaves;
        int levels;
        cin>>levels;
        while(levels--){
            cin>>number_of_leaves;
            if (leafs >= number_of_leaves){
                leafs -= number_of_leaves;
                leafs = leafs << 1;
            }
            else{
                leafs = -1;
                break;
            }
        }
        if (leafs > 0){
            leafs = -1;
        }
        if(leafs < 0){
            cout<<"No";
        }else{
            cout<<"Yes";
        }
        cout<<endl;
    }
    return 0;
}