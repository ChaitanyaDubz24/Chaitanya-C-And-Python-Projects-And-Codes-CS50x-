import re
import sys


def main():
    print(parse(input("HTML: ")))


def parse(s):
    if re.search(r"<iframe(.)*><\/iframe>", s):
        full_url = re.search(r"(http(s)?:\/\/(www\.)*youtube\.com\/embed\/)([a-z_A-Z_0-9]+)", s)
        if full_url:
           address_in_url = full_url.groups()
           return ("https://youtu.be/" + address_in_url[3])

if __name__ == "__main__":
    main()
