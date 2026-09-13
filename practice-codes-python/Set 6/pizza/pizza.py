import sys
import csv
from tabulate import tabulate

if len(sys.argv)>2:
    sys.exit("Too many command-line arguments!")
elif len(sys.argv)<2:
    sys.exit("Too few command-line arguments!")
elif not sys.argv[1].endswith(".csv"):
    sys.exit("This is not a CSV file")

pizza_grid = []

try:
    with open(sys.argv[1], "r") as csvfile_pizza:
        menu_interpreter = csv.reader(csvfile_pizza)
        for line in menu_interpreter:
            pizza_grid.append(line)
        print(tabulate(pizza_grid[1:], headers = pizza_grid[0], tablefmt = "grid"))

except FileNotFoundError:
    sys.exit("The requested file does not exist!!")


