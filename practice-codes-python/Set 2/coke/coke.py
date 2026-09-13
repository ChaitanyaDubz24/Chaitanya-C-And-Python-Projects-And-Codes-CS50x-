c = 50
p = 0
coins = [25, 10, 5]


while c > 0:
    print(f"Amount Due: {c}")
    pay = int(input("Insert Coin: "))
    if pay in coins:
        c = c - pay
        p = p + pay

if p >= c:
    print(f"Change Owed: {p - 50}")
