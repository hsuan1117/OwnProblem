#include "gen.hpp"
inline string int_to_string(int val) {
    return (val < 10 ? "0" : "") + Other::int_to_string(val);
}
struct op {
    int l,r;
};
int main() {
	string ProblemName = "BlueCloud";
	string file ;
	const int tasknum = 3;
	#ifdef __APPLE__
	    file = "/Users/student/Desktop/Hsuan/出題/資訊期末考/測資/"+ProblemName+"/Output/";
	#elif defined _WIN32 || defined _WIN64
	    file = "Input/";
	#endif 
    
    int n = Random::random(10,10000) , q = Random::random(10,10000);
    
    vector<op > ops;
    
    for(int t=0;t<q;t++) {
        op now = {-1,-1};
        now.l = Random::random(0,n-1);
        now.r = Random::random(0,n-1);
        //if(now.l > now.r)swap(now.l,now.r);
        ops.emplace_back(now);
    }
    
    freopen((file+"task"+int_to_string(tasknum)+".txt").c_str(),"w",stdout);
    #define endl '\n'
    cout << n << " " << q << endl;
    for(int i=0;i<n;i++)cout << Random::random(2,10000) << " ";
    
    cout << endl;
    for(int i=0;i<ops.size();i++){
        op x = ops[i];
        cout << x.l << " " << x.r << endl;
    }
    return 0;
}
