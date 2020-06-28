#include<iostream>
using namespace std;

int main(){
	int a,b,n,k;cin >> a >> b >> n >> k;
	if(k > n){
		cout << 0 << endl;
		return 0;
	}
	unsigned long long result = 1;
	for(unsigned long long i = n ; i >= 1 ; i--)result*=i;
	for(unsigned long long i = (n-k) ; i >= 1 ; i--)result/=i;
	for(unsigned long long i = k ; i >= 1 ; i--)result/=i;
	
	for(int i = 0 ; i < k ; i++)result*=a;
	for(int i = 0 ; i < (n-k) ; i++)result*=b;
	
	
	cout << result << endl;
	
	return 0;
}

