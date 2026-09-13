from numb3rs import validate

def main():
    format_correct()
    range_correct()

def format_correct():
    assert validate(r'1.2.3.4') == True
    assert validate(r'1.2.3') == False
    assert validate(r'1.2') == False
    assert validate(r'1') == False

def range_correct():
    assert validate(r'255.255.255.255') == True
    assert validate(r'1000.2.2.2') == False
    assert validate(r'2.1000.2.2') == False
    assert validate(r'2.2.1000.2') == False
    assert validate(r'2.2.2.1000') == False

if __name__ == "__main__":
    main()
