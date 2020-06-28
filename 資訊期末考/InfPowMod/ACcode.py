while 1 :
    try:
        a,b,c = map(int,input().split())
        print(pow(a,b,c))
    except EOFError:
        break
        pass

