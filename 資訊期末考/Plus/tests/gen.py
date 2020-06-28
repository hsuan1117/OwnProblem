import random 

a = 1e1
b = 1e99
taskNum = 10

with open(f"Input/task{taskNum:02}.txt","w") as f:
    for i in range(random.randrange(10,100)):
        f.write(f"{random.randrange(a,b)} {random.randrange(a,b)}")
        f.write("\n")