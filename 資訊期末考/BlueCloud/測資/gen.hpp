#include<iostream>
#include<ctime>
#include<random>
#include<chrono>
#include<algorithm>
#include<stdio.h>
#include<assert.h>
using namespace std;

class Random {
    public:
        static int random(int l,int r) {
            static mt19937 Rand(chrono::steady_clock::now().time_since_epoch().count());
            return uniform_int_distribution<int>(l, r)(Rand);
        }
        static long long random_64(long long l,long long r) {
            static mt19937_64 Rand(chrono::steady_clock::now().time_since_epoch().count());
            return uniform_int_distribution<long long>(l, r)(Rand);
        }
        static bool random(double P) {
            assert(0.0<=P && P<=100.0);
            int now = P*10000;
            return random(1,10000*100) <= now;
        }
};

class Other {
    public:
        static long long string_to_int(string s) {        // assume int(s) is a valid and 64-bit number
            long long ret = 0 , coe = 1;
            for(char c : s)
                if(c == '-')
                    coe = -1;
                else
                    ret = ret * 10 + c - '0';
            return coe * ret;
        }
        static string int_to_string(long long val) {
            if(val == 0)    return "0";
            
            bool neg = false;
            if(val < 0) {
                neg = true;
                val = -val;
            }
            
            string ret = "";
            while(val > 0) {
                ret += (char)(val % 10 + '0');
                val /= 10;
            }
            if(neg)        ret += "-";
            reverse(ret.begin(),ret.end());
            return ret;
        }
};
