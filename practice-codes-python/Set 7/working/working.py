import re
import sys


def main():
    print(convert(input("Hours: ")))


def convert(s):
    correct_input = re.search(r"^(([0-9][0-2]*):*([0-5][0-9])*) ([A-P]M) to (([0-9][0-2]*):*([0-5][0-9])*) ([A-P]M)$", s)
    if correct_input:
       segments = correct_input.groups()
       if int(segments[1]) > 12 or int(segments[5]) > 12:
           raise ValueError
       starting = format_24hour(segments[1], segments[2], segments[3])
       ending = format_24hour(segments[5], segments[6], segments[7])
       return (starting + ' to ' + ending)
    else:
       raise ValueError


def format_24hour(hours, minutes, am_or_pm):
    if am_or_pm == 'AM':
        if int(hours) == 12:
            hour_in24 = 0
        else:
            hour_in24 = int(hours)

    else:
        if int(hours) == 12:
            hour_in24 = 12
        else:
            hour_in24 = int(hours) + 12


    if minutes == None:
        minutes_newformat = ':00'
        time_24format =  (f"{hour_in24:02}" + minutes_newformat)

    else:
        time_24format = (f"{hour_in24:02}" + ':' + minutes)
    return time_24format

if __name__ == "__main__":
    main()
