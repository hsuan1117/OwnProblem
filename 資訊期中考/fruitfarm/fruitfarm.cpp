#include<iostream>
using namespace std;
int main() {
	// a => win7
	// b => win8
	// c => win8.1
	// d => win10
	// e => office365
	bool a,b,c,d,e;
	a=0;
	b=0;
	c=0;
	d=0;
	e=0;

	double result = 0.0;

	int N ;
	cin >> N;
	int M;
	cin >> M;
	for(int i=0; i<M; i++) {
		int mode,data1,data2;
		double score;
		cin >> mode >> data1 >> data2 >> score;
		if(mode == 1) {
			if(data2%data1==0) {
				result += score;
			}
		} else if(mode==2) {
			if(data1%2==0&&data2%2==0) {
				result += score;
			}
		} else if(mode==3) {
			if(data1%2==1&&data2%2==1) {
				result += score;
			}
		}
	}
	
	if(N==7) {
		// 7
		a=1;

	} else if(N==8) {
		// 8
		b=1;

	} else if(N==10) {
		// 10
		d=1;

	} else if(N==15) {
		// 7 8
		a=1;
		b=1;

	} else if(N==17) {
		// 7 10
		a=1;
		d=1;

	} else if(N==18) {
		// 8 10
		b=1;
		d=1;

	} else if(N==25) {
		// 7 8 10
		a=1;
		b=1;
		d=1;

	} else if(N==81) {
		// 81
		c=1;

	} else if(N==88) {
		// 7 81
		a=1;
		c=1;

	} else if(N==89) {
		// 8 81
		b=1;
		c=1;

	} else if(N==91) {
		// 10 81
		d=1;
		c=1;

	} else if(N==96) {
		// 7 8 81
		a=1;
		b=1;
		c=1;

	} else if(N==98) {
		// 7 10 81
		a=1;
		d=1;
		c=1;

	} else if(N==99) {
		// 8 10 81
		b=1;
		d=1;
		c=1;

	} else if(N==106) {
		// 7 8 10 81
		a=1;
		b=1;
		d=1;
		c=1;

	} else if(N==365) {
		// 365
		e=1;

	} else if(N==372) {
		// 7 365
		a=1;
		e=1;

	} else if(N==373) {
		// 8 365
		b=1;
		e=1;

	} else if(N==375) {
		// 10 365
		d=1;
		e=1;

	} else if(N==380) {
		// 7 8 365
		a=1;
		b=1;
		e=1;

	} else if(N==382) {
		// 7 10 365
		a=1;
		d=1;
		e=1;

	} else if(N==383) {
		// 8 10 365
		b=1;
		d=1;
		e=1;

	} else if(N==390) {
		// 7 8 10 365
		a=1;
		b=1;
		d=1;
		e=1;

	} else if(N==446) {
		// 81 365
		c=1;
		e=1;

	} else if(N==453) {
		// 7 81 365
		a=1;
		c=1;
		e=1;

	} else if(N==454) {
		// 8 81 365
		b=1;
		c=1;
		e=1;

	} else if(N==456) {
		// 10 81 365
		d=1;
		c=1;
		e=1;

	} else if(N==461) {
		// 7 8 81 365
		a=1;
		b=1;
		c=1;
		e=1;

	} else if(N==463) {
		// 7 10 81 365
		a=1;
		d=1;
		c=1;
		e=1;

	} else if(N==464) {
		// 8 10 81 365
		b=1;
		d=1;
		c=1;
		e=1;

	} else if(N==471) {
		// 7 8 10 81 365
		a=1;
		b=1;
		d=1;
		c=1;
		e=1;

	} else {
		cout << "Something wrong!" << endl;
		return 0;
	}

	int isBP = 0;
	if(b||c||d||e) {
		result*=1.4;
		isBP++;
	}
	if(b&&c) {
		result*=2.5;
		isBP++;
	}
	if(a&&b||b&&d||a&&d||c&&e) {
		result*=2.6;
		isBP++;
	}
	if(b||c||d) {
		result*=3.7;
		isBP++;
	}
	if(d||e) {
		result*=3.3;
		isBP++;
	}
	if(d) {
		result*=520;
		isBP++;
	}
	printf("%.2f\n",result);
	if(isBP==6) {
		cout << "Best Pair!" << endl;
	} else {
		cout << "Can be better!" << endl;
	}
}
