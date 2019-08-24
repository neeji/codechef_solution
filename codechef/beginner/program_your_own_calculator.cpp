#include<bits/stdc++.h>
using namespace std;

int main(void){
	double a,b;
	cin>>a>>b;
	cin.ignore();
	char c;
	cin>>c;
	std::cout << fixed;
    std::cout << setprecision(6);
	switch(c){
		case '+':
			cout<<a+b;
			break;
		case '-':
			cout<<a-b;
			break;
		case '*':
			cout<<a*b;
			break;
		case '/':
			cout<<a/b;
			break;
		default:
			break;
	}
	return 0;
}