a = input("What is the Answer to the Great Question of Life, the Universe, and Everything? ").strip().lower()
if a == "42":
    print("Yes")
elif a == "forty two":
    print("Yes")
elif a == "forty-two":
    print("Yes")
else:
    print("No")
