import sys
from os.path import splitext
from PIL import Image, ImageOps

def main():

    #Checking Command Lines:
    if len(sys.argv)>3:
        sys.exit("Too many command-line arguments!")
    elif len(sys.argv)<3:
        sys.exit("Too few command-line arguments!")

    file_one = splitext(sys.argv[1])
    file_two = splitext(sys.argv[2])
    if extension_check(file_one[1]) == False or extension_check(file_two[1]) == False:
        sys.exit("Invalid Input/Output :(")

    if (file_one[1].lower() != file_two[1].lower()):
        sys.exit("Input & output have different extensions!!!")

    #Opening Image And Creating After.png:
    try:
        image_shirt = Image.open(sys.argv[1])

    except FileNotFoundError:
        sys.exit("Input is non-existent")

    file_with_shirt = Image.open("shirt.png")
    size_ofshirt = file_with_shirt.size
    cs50_muppet = ImageOps.fit(image_shirt, size_ofshirt)
    cs50_muppet.paste(file_with_shirt, file_with_shirt)
    cs50_muppet.save(sys.argv[2])


def extension_check(file):
    if file in [".jpg", ".png", ".jpeg"]:
        return True
    else:
        return False

if __name__ == "__main__":
    main()

