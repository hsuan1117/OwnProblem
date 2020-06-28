import random 

aMax = 1e99
bMax = 1e99
taskNum = 15

with open(f"Input/task{taskNum:02}.txt","w") as f:
    #for i in range(1):
    for i in range(random.randrange(10,100)):
        f.write(f"{random.randrange(10,aMax)} {random.randrange(10,bMax)} {int(1000000007)}")
        f.write("\n")