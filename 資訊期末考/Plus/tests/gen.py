import random 

a = 1e1
b = 1e50
taskNum = 3

with open(f"Input/task{taskNum:02}.txt","w") as f:
    for i in range(1):
        f.write(f"{random.randrange(a,b)} {random.randrange(a,b)}")
        f.write("\n")