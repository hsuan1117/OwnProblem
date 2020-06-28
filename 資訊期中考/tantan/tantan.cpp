#include <iostream>
using namespace std;

int main() {
	//TanTan¼Æ¦C
	unsigned long long a,b,c,d,e;
	a = 1;
	b = 2;
	c = 3;
	d = 4;
	e = 5;
	int N ;
	cin >> N;
	
	if(N==1)cout << 1 << endl;
	else if(N==2)cout << 2 << endl;
	else if(N==3)cout << 3 << endl;
	else if(N==4)cout << 4 << endl;
	else if(N==5)cout << 5 << endl;
	else {
		for(int i=5; i<N; i++) {
			unsigned long long _ = (a*9) + (b*7) + (c*5) + (d*3) + (e*1);
			a=b;b=c;c=d;d=e;e=_; 
		}
		cout << e << endl;
	}
	return 0;
}
