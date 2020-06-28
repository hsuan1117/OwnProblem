#include<bits/stdc++.h>
using namespace std;
vector<pair<int,set<int> > > a;

int main() {
	for(int i=0; i<2; i++) {
		for(int j=0; j<2; j++) {
			for(int k=0; k<2; k++) {
				for(int m=0; m<2; m++) {
					for(int n=0; n<2; n++) {
						set<int> x;
						x.insert((i?7:0));
						x.insert((j?8:0));
						x.insert((k?81:0));
						x.insert((m?10:0));
						x.insert((n?365:0));
						a.push_back({
							(
							    (i?7:0) +
							    (j?8:0) +
							    (k?81:0) +
							    (m?10:0) +
							    (n?365:0)
							),
							x
						});
					}
				}
			}
		}
	}

	sort(a.begin(),a.end());
	int q = 0;
	for(auto d:a) {
		if(d.first!=0) {
			if(q==0) {
				cout << "if(N==";
			} else {
				cout << "}else if(N==";
			}
			cout << d.first << "){" << endl << "  // ";
			for(auto z : d.second) {
				if(z != 0) {
					cout << z << " ";
				}
			}
			cout << endl << "  ";
			for(auto z : d.second) {
				if(z != 0) {
					if(z==7) {
						cout << "a=1;";
					} else if(z==8) {
						cout << "b=1;";
					} else if(z==81) {
						cout << "c=1;";
					} else if(z==10) {
						cout << "d=1;";
					} else if(z==365) {
						cout << "e=1;";
					}
				}
			}

			cout << endl << endl;
			
			if(q==a.size()-1) {
				cout << "}" ;
			}
		}
		q++;
	}
	return 0;

}
