ef main():
    fuel = input("Fraction: ")
    a = convert(fuel)
    print(gauge(a))


def convert(frac):
    a, b = frac.split("/")
    if int(a)/int(b) > 1:
        raise ValueError
    elif int(b) == 0:
        raise ZeroDivisionError
    return int(int(a)/int(b) * 100)


def gauge(percent):
    try:
        if 0 <= percent <= 1:
            return "E"
        elif 99 <= percent <= 100:
            return "F"
        elif 1 < percent < 99:
            return f"{int(percent)}%"
        else:
            raise TypeError
    except TypeError:
        pass


if __name__ == "__main__":
    main()
