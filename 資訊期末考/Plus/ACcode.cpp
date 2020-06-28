// 相加 -- AC Code by Hsuan
#include <iostream>
#include <cstring>
using namespace std;
int Result[100+5],A[100+5],B[100+5];
int main(int argc, const char * argv[]) {
	string a,b;
	while(cin >> a >> b) {
		for(int i=0,j=a.length()-1; j>=0; i++,j--)A[i] = a[j] - '0';
		for(int i=0,j=b.length()-1; j>=0; i++,j--)B[i] = b[j] - '0';
		int x = 0;
		for(int i=0; i<=102; i++) {
			Result[i] = A[i] + B[i]+x;
			x = Result[i] /10;
			Result[i] %= 10;
		}

		int flag = 0;
		for(int i=102; i>=0; i--) {
			flag |= Result[i]!=0;
			if(flag)cout << Result[i];
		}
		cout << '\n';
		
		memset(Result,0,sizeof(Result));
		memset(A,0,sizeof(A));
		memset(B,0,sizeof(B));
	}
	return 0;
}
