from bank import value

def main():
    test_value_0()
    test_value_20()
    test_value_100()

def test_value_0():
    assert value("hello") == 0
    assert value("hello henry") == 0
    assert value("HeLLo") == 0

def test_value_20():
    assert value("hi") == 20
    assert value("Heyy") == 20
    assert value("Hiiii") == 20

def test_value_100():
    assert value("What's good") == 100
    assert value("Good Morning Guest") == 100
    assert value("Welcome to our place!") == 100


if __name__ == "__main__":
    main()
