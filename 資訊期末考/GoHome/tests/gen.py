import random

taskNum = 9
roadMax  = 50
placeMax = 500


with open(f"Input/task{taskNum:02}.txt","w") as f:
    for _ in range(13):
    #times = random.randrange(1,6)
    #for _ in range(times):
        road  = random.randrange(1,roadMax)
        place = random.randrange(2,placeMax)
        Q     = random.randrange(1,2)
        roads = [[False for _ in range(place)] for _ in range(place)]
        roadList = []
        f.write(f"{place} {road}\n")
        idx = 0
        for i in range(road):
            x = (random.randrange(1,place),random.randrange(1,place),random.randrange(1,15))
            #or roads[x[0]][x[1]] == True
            while x[0] == x[1] :
                idx+=1
                x = (random.randrange(1,place),random.randrange(1,place),random.randrange(1,15))
            roads[x[0]][x[1]] = True
            roadList.append(x)
            # print(f"tried {idx}")
            f.write(f"{x[0]} {x[1]} {x[2]}\n")
    
        f.write(f"{Q}\n")
        for i in range(Q):
            """a = random.randrange(1,place)
            b = random.randrange(1,place)
            should = random.randrange(1,99)
            if should % 2 == 1:"""
            xx = random.choice(roadList)
            """a = random.choice(roadList)[0]
            b = random.choice(roadList)[1]"""
            a = xx[0]
            b = xx[1]
            f.write(f"{a} {b}\n")
        print(_)
