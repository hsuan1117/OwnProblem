import random 

aMax = 1e2
bMax = 1e15
taskNum = 2

with open(f"Input/task{taskNum:02}.txt","w") as f:
    for i in range(10):
        f.write(f"{random.randrange(10,aMax)} {random.randrange(10,bMax)} {int(1000000007)}")
        f.write("\n")