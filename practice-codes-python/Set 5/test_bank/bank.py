def main():
    greeting = input("Greeting: ")
    value(greeting)

def value(greeting):
    greeting_value = greeting.lower().strip()

    if not greeting_value.find("hello"):
        return 0

    elif greeting_value[0] == "h":
        return 20

    else:
        return 100

if __name__ == "__main__":
    main()
