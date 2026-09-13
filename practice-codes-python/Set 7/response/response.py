from validator_collection import validators


def main():
    email_input = (input("Email Address: "))
    try:
        correct_email = validators.email(email_input)
        print("Valid")

    except:
        print("Invalid")


if __name__ == "__main__":
    main()




