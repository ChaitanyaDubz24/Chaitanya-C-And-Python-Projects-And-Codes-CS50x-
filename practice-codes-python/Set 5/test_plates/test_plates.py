from plates import is_valid

def main():
    test_isvalidA()
    test_isvalidB()
    test_isvalidC()


def test_isvalidA():
    assert is_valid("CD") == True
    assert is_valid("C4") == False
    assert is_valid("2D") == False
    assert is_valid("24") == False
    assert is_valid("a") == False
    assert is_valid("A") == False


def test_isvalidB():
    assert is_valid("book game") == False
    assert is_valid("cs50") == True
    assert is_valid(".__!") == False
    assert is_valid("cd08") == False
    assert is_valid("cs50!") == False
    assert is_valid("cs 50") == False


def test_isvalidC():
    assert is_valid("TESLAA") == True
    assert is_valid("HITESLAAA") == False
    assert is_valid("CAD124") == True
    assert is_valid("124CAD") == False
    assert is_valid("AAA11A") == False
    assert is_valid("AAA11") == True




if __name__ == "__main__":
    main()
