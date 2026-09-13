import sys
if len(sys.argv)>2:
    sys.exit("Too many command-line arguments")
elif len(sys.argv)<2:
    sys.exit("Too few command-line arguments")
else:
    if sys.argv[1].endswith(".py"):
        count=0
        with open(sys.argv[1], 'r') as file:
            total_lines=file.readlines()
            for line in total_lines:
                if not (line.isspace() or line.lstrip().startswith("#")):
                    count+=1
            print(count)
    else:
        sys.exit("Not a Python File!")
