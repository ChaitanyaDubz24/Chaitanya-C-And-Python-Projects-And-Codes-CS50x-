import sys
import csv

#Checking Length:
if len(sys.argv)>3:
    sys.exit("Too many command-line arguments!")
elif len(sys.argv)<3:
    sys.exit("Too few command-line arguments!")
elif not sys.argv[1].endswith(".csv"):
    sys.exit("This is not a CSV file")

#Opening And Appending:

after_name = []

try:
    with open(sys.argv[1], "r") as before_csvfile:
        read_file = csv.DictReader(before_csvfile)
        for line in read_file:
            all_names = line["name"].split(",")
            after_name.append({'first': all_names[1].lstrip(), 'last': all_names[0], 'house': line["house"]})

except FileNotFoundError:
    sys.exit(f"Could not read {sys.argv[1]}")

with open(sys.argv[2], "w") as new_file:
    appending = csv.DictWriter(new_file, fieldnames = ["first", "last", "house"])
    appending.writerow({"first": "first", "last": "last", "house": "house"})
    for line in after_name:
        appending.writerow({"first": line["first"], "last": line["last"], "house": line["house"]})



