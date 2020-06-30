import random
import math

taskNum  = 5
aMax     = 1e9
bMax     = 1e50

with open(f"Input/task{taskNum:02}.txt","w") as f:
    for _ in range(100):
        f.write(f"{random.randrange(-aMax,aMax)} {random.randrange(0,bMax)}\n")