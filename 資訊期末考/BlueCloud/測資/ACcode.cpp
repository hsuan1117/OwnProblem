#include<iostream>
using namespace std;
int star[100000+5];
long long data[100000+5];
int main() {
	ios::sync_with_stdio(0);cin.tie(0);
    int n,ask;
    while(cin>>n>>ask){
        for (int i=0; i<n; i++) cin>>star[i];
        data[0] = star[0];
        
        for (int i=1; i<n; i++)data[i]=data[i-1]+star[i];
        
        for (int i=0; i<ask; i++) {
            int start,end;cin>>start>>end;
            if(start == end){
                cout << star[start] << endl;
                return 0;
            }
            if (start>end) swap(start,end);
            if(start == 0) {
                cout<<data[end]<<'\n';
            } else {
                cout<<data[end]-data[(start-1<0 ? 0 : start-1)]<<'\n';
            }
        }
    }
}
