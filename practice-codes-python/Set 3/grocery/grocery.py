List1 = []
List2 = {}


while True:
    try:
        a = input().upper()
        List1.append(a)
    except EOFError:
        print("")
        for i in List1:
            if not i in List2:
                List2[i] = 1
            else:
                List2[i] += 1

        for key, value in sorted(List2.items()):
            print(value,key)
        exit()
