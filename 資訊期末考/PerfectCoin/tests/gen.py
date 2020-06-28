import random
import math

N = random.randrange(2,20)
Q = random.randrange(2,20)
all = 0
factors = []

print(N)
for i in range(N):
    a,b = (random.randrange(1,20),random.randrange(1,20))
    all = all + a*b
    print(a,b)

#print(all)
for i in [y*y for y in range(int(math.sqrt(all))) if y > 0]:
    if all % i == 0 :
        factors.append((i,int(all/i)))

print(Q)
for i in range(Q):
    fs = random.choice(factors)
    print(fs[0],fs[1])


""" 
with open(f"Input/task{taskNum:02}.txt","w") as f:
    
    f.write(f"{random.randrange(a,b)} {random.randrange(a,b)}")
    f.write("\n")

"""

"""
int sum;
vector<pair<int,int>>factor;
int a,b,n,q,k;

    srand(time(NULL));
    //get n
    n = rand()%19;
    cout << n+1 << endl;
    //get a,b
    for(int i=0;i<n+1;i++){
        a = rand()%20;
        b = rand()%20;
        sum += a*b;
        cout << a << ' ' << b << endl;
    }
    
    //get factor of sum
    for(int i=1;i*i<=sum;i++){
        if(sum%i==0)factor.push_back({i,sum/i-i});
    }
    //cout << endl << sum << endl << endl;
    //get q
    q = rand()%100;
    cout << q << endl;
    //get x,y
    int siz = factor.size();
    for(int i=0;i<q;i++){
        k = rand()%siz;
        if(sum%(factor[k].first+factor[k].second)!=0)cout << "no ";
        cout << factor[k].first << ' ' << factor[k].second << endl;
    }
}

"""