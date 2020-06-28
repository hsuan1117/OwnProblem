// InfMod -- AC Code by Hsuan
#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, const char * argv[]) {
	string num;
	long long mod;
	long long res = 0;
	while(cin >> num >> mod) {
		for (int i = 0; i < num.length(); i++) 
		    res = (res*10 + (int)num[i] - '0') %mod; 
		cout << res << endl;
		res = 0;
	}
	return 0;
}
