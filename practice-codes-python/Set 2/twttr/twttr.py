def main():
    fullword = input("Input: ")
    shorten(fullword)

def shorten(word):
    vowels = ["a", "A", "E", "e", "I", "i", "O", "o", "U", "u"]
    out = ""

    for consonants in word:
            if not consonants in vowels[:]:
                    out += consonants
    return out

if __name__ == "__main__":
    main()
