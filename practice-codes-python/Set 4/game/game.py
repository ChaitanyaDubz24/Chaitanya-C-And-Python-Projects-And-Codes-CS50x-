import random

while True:
    try:
        input1 = int(input("Level: "))
        if input1 > 0:
            break
    except:
        pass

r = random.randint(1,input1)

while True:
    try:
        a = int(input("Guess: "))
        if a != 0:
            if a < r:
                print("Too small!")
            elif a > r:
                print("Too large!")
            else:
                print("Just right!")
                break
    except:
        pass
