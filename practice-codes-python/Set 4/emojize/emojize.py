import emoji

userinput=input("Enter emoji: ")
output = emoji.emojize(userinput, language='alias')

print("Output:", output)
