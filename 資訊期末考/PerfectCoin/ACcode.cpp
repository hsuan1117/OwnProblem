#include<iostream>
#include<functional>
#define IOS ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
using namespace std;

int n,p,a,b,sum;
int q,x,y;
int C[110];
bool dp[10010];

int main(){
    IOS
    cin >> n;
    for(int i=0;i<n;i++){
    	cin >> a >> b;
    	for(int j=0;j<b;j++)C[p++] = b;
    	sum += a*b;
	}
	dp[0] = true;
	for(int i=0;i<p;i++){
		for(int k=sum;k>=C[i];k--){
			dp[k] = dp[k]||dp[k-C[i]];
		}
	}
	cin >> q;
	while(q--){
		cin >> x >> y;
		if(dp[sum*x/(x+y)])cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
