#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t;
	cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l >> m >> n >> o >> p >> q >> r >> s >> t;
	
	// Z
	int aa,bb,cc,dd,ee,ff;
	/*
	[[aa,bb]
	 [cc,dd]
	 [ee,ff]]
	 */
	aa = a*m + b*o + c*q;
	bb = a*n + b*p + c*r;
	cc = d*m + e*o + f*q;
	dd = d*n + e*p + f*r;
	ee = g*m + h*o + i*q;
	ff = g*n + h*p + i*r;
	
	if(aa<0){
		aa = 0;
	}
	if(bb<0){
		bb = 0;
	}
	if(cc<0){
		cc = 0;
	}
	if(dd<0){
		dd = 0;
	}
	if(ee<0){
		ee = 0;
	}
	if(ff<0){
		ff = 0;
	}
	
	/*cout << "L:" << endl << aa << " " << bb << endl
	<< cc << " " << dd << endl
	<< ee << " " << ff << endl;*/
	
	// O
	int aaa,bbb,ccc;
	/*
	[aaa,
	 bbb,
	 ccc]
	 */
	aaa = aa*s + bb*t ;
	bbb = cc*s + dd*t ;
	ccc = ee*s + ff*t ;
	
	//Loss
	double Loss;
	Loss = 0.5 *( ((j-aaa)*(j-aaa)) + ((k-bbb)*(k-bbb)) + ((l-ccc)*(l-ccc)) );
	printf("%.2f\n",Loss); 
	
	return 0;
	// 1 2 -1 2 -3 2 -1 -1 3 1 2 -1 -1 2 1 1 1 -1 1 -1 
}
