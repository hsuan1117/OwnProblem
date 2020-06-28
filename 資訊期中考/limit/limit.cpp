#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a,b,c,i,j,k;cin >> a >> b >> c >> i >> j >> k;
	
	if(((i*k)+j) == 0){
		//·L¤À
		cout << (2*a*k + 1*b) / (i) << endl;
	} else {
		//¥N¤J 
		cout << (a*k*k + b*k + c) / (i*k + j) << endl;
	}
	// 1 0 -1 1 -1 1
	return 0;
}
