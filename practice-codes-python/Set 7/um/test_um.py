from um import count


def test_uminword():
    assert count('gum') == 0
    assert count('mummy ') == 0

def test_umwithoutspace():
    assert count('um') == 1
    assert count('um, hi... um... cassandra?') == 2

def test_umwithspace():
    assert count(' um ') == 1

def test_umwithallupperandlower():
    assert count('Um, who uses typewriters anyway..') == 1
    assert count('umm.. UM.. this is um my seat') == 2

if __name__ == "__main__":
    main()
