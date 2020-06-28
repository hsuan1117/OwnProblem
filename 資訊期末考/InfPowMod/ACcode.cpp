// InfMod -- AC Code by Hsuan
#include <iostream>
#include <cstring>
using namespace std;
int main() {
	string num,num2;
	long long mod;
	while(cin >> num >> num2 >> mod) {
		long long a = 0, b = 0;
		long long res = 1;
		for (int i = 0; i < num.length(); i++) 
		    a = (a * 10 + (num[i] - '0')) % mod; 
			
		for (int i = 0; i < num2.length(); i++) 
		    b = (b * 10 + (num2[i] - '0')) % (mod - 1); 
			
		while (b) {
		    if (b & 1) 
		        res = res * a % mod; 
		    b = b / 2; 
		    a = a * a % mod; 
		} 
		cout << res << endl;
	}
	return 0;
}
