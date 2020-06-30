#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	long long angle;
	string type;
	while(cin >> angle >> type){
		
		//最大負同界角 type = 奇數 
		//最小正同界角 type = 偶數 
		if(angle > 0){
			int newAngle = angle;
			if(char(type[type.length()-1] -'0') % 2 == 1){
				while(newAngle >= 0 && newAngle+360 > 0)newAngle -= 360;
				cout << angle << " " << newAngle << endl;
			}else{
				while(newAngle > 360 && newAngle >= 0)newAngle -= 360;
				cout << angle << " " << newAngle << endl;
			}
		}else if(angle < 0){
			int newAngle = angle;
			if(char(type[type.length()-1] -'0') % 2 == 1){
				while(newAngle < -360 && newAngle <= 0)newAngle += 360;
				cout << angle << " " << newAngle << endl;
			}else{
				while(newAngle <= 0 && newAngle-360 < 0)newAngle += 360;
				cout << angle << " " << newAngle << endl;
			}
		}else{
			if(char(type[type.length()-1] -'0') % 2 == 1){
				cout << angle << " " << -360 << endl;
			}else{
				cout << angle << " " <<  360 << endl;
			}
		}
	}
	
	return 0;
}
