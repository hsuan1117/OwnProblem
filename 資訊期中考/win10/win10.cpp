#include <iostream>
using namespace std;

int main(){
	//flag1 ��ܲŦX���� 
	//flag2 ��ܭ��� 
	//opt   ���קK�u����ӼƦr�S�B�z�� 
    bool flag1 = 1,
         flag2 = 1,
         opt = 0;
    
    int type,n,k;
    cin >> type >> n >> k;
    int a=-1,b=-1;
    for(int i=0;i<n;i++){
        if(a==-1){
            cin >> a;
            if(a%k!=0){
                flag2 = 0;
            }
        }else if(b==-1){
            cin >> b;
            if(b%k!=0){
                flag2 = 0;
            }
        }else{
            opt = 1;
            a = b;
            cin >> b;
            if(b%k!=0){
                flag2 = 0;
            }
            
            if(type == 1){
                if(!(a<b)){
                    flag1 = 0;
                }
            }else if (type == 2){
                if(!(a==b)){
                    flag1 = 0;
                }
            }else if (type == 3){
                if(!(a>b)){
                    flag1= 0;
                }
            }
        }
    }
    if(!opt){
        if(type == 1){
            if(!(a<b)){
                flag1 = 0;
            }
        }else if (type == 2){
            if(!(a==b)){
                flag1 = 0;
            }
        }else if (type == 3){
            if(!(a>b)){
                flag1 = 0;
            }
        }
    }
    cout << flag1 << endl;
    if(flag2){
    	//���\�����Ҹ� 
        cout << "Oh, win10 I love you." << endl;
    }else{
    	//���� @__@ 
        cout << "Please, I want to meet win10." << endl;
    }
    return 0;
}
