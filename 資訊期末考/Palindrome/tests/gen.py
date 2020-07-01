import random 

wordMin = 1e1
wordMax = 1e3
taskNum = 3

with open(f"Input/task{taskNum:02}.txt","w") as f:
    ansList = []
    for i in range(5):
        ansType  = random.randrange(1,1e15)
        wordList = []
        if ansType % 2 == 0 :
            # Yes
            print("YES")
            ansList.append("YES")
            for _ in range(random.randrange(int(wordMin/2),int(wordMax/2))):
                w = chr(random.randrange(65,91))
                wordList.append(w)
                f.write(f"{w}")
                #print(w,end="")    
            for w in list(reversed(wordList)):
                f.write(f"{w}")
                #print(w,end="")
        else:
            # No
            print("NO")
            ansList.append("NO")
            for _ in range(random.randrange(int(wordMin),int(wordMax))):
                #print(chr(random.randrange(65,91)),end="")
                f.write(f"{chr(random.randrange(65,91))}")
        f.write("\n")
        
    f.close()
    with open(f"Output_Python/task{taskNum:02}.txt","w") as f2:
        for ans in ansList:
            f2.write(f"{ans}\n")
    f2.close()