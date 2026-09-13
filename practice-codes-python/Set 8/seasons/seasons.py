from datetime import date
import sys
import inflect

words = inflect.engine()

def main():
    try:
        year_birth, month_birth, day_birth = input("Date of Birth: ").split("-")
    except ValueError:
        sys.exit("Invalid date")

    print(mins_alive(year_birth, month_birth, day_birth))


def mins_alive(year_birth, month_birth, day_birth):
    try:
        birth_day = date(int(year_birth), int(month_birth), int(day_birth))
    except ValueError:
        return ("Invalid date")

    todays_date = date.today()
    days_from_birth_to_today = todays_date - birth_day
    minutes_lived = (days_from_birth_to_today.days * 1440)
    num_to_words = words.number_to_words(minutes_lived, andword = "") + " minutes"
    return num_to_words.capitalize()



if __name__ == "__main__":
    main()
