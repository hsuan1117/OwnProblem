import random
import math

taskNum  = 5
priceMax = 120
NMax     = 100
QMax     = 30

with open(f"Input/task{taskNum:02}.txt","w") as f:
    for _ in range(1):
        N = random.randrange(2,NMax)
        Q = random.randrange(2,QMax)
        all = 0
        factors = []
        coins   = [False for x in range(priceMax)]
        
        f.write(f"{N}\n")
        for i in range(N):
            a,b = (random.randrange(1,2),random.randrange(1,priceMax))
            while coins[b]==True:
                b = random.randrange(1,N)
                if not coins[b] : break
            coins[b] = True
            all = all + a*b
            f.write(f"{a} {b}\n")
        
        for i in [y*y for y in range(int(math.sqrt(all))) if y > 0]:
            xx = int(math.sqrt(i))
            if all % xx == 0 : factors.append((xx,int(all/xx-xx)))

        f.write(f"{Q}\n")
        for i in range(Q):
            decide = random.randrange(1,999)
            fs = random.choice(factors)
            if decide % 2 == 1:
                f.write(f"{fs[0]} {fs[1]}\n")
            else:
                tmp  = random.randrange(1,10)
                XorY = random.randrange(1,999)
                if XorY % 2 == 1:
                    f.write(f"{fs[0]} {fs[1]+tmp}\n")
                else:
                    f.write(f"{fs[0]+tmp} {fs[1]}\n")