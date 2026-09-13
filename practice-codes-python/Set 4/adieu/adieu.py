import inflect

list1 = []
p = inflect.engine()

while True:
    try:
        a = str(input("Input: "))
        list1.append(a)
    except EOFError:
        print()
        break

result = p.join(list1)
print("Adieu, adieu, to",result)
