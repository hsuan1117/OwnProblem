// Palindrome -- AC Code by Hsuan
#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, const char * argv[]) {
	ios::sync_with_stdio(0);cin.tie(0);
	string str;
	while(cin >> str){
		string str2 = str;
		int len = str.length();
		int n=len-1;
		
		for(int i=0;i<(len/2);i++){
			char x = str[i];
			str[i] = str[n];
			str[n] = x;
			n = n-1;		
		}
		if(str == str2){
			cout << "YES" << endl;	
		}else{
			cout << "NO"  << endl;
		}
	}
	return 0;
}
