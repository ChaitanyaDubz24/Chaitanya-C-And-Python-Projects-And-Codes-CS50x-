from working import convert
import pytest

def test_format_is_correct():
    with pytest.raises(ValueError):
         convert('01:00 PM - 9:00 PM')
    with pytest.raises(ValueError):
         convert('1:00AM to 4:00AM')

def test_convert_to_24hour():
    assert convert('08:00 AM to 5:00 PM') == "08:00 to 17:00"
    assert convert('01:13 AM to 7:45 AM') == "01:13 to 07:45"

def test_input_in_range():
    with pytest.raises(ValueError):
         convert('01:00 PM to 20:00 PM')
    with pytest.raises(ValueError):
         convert('10:60 AM to 04:13 PM')

if __name__ == '__main__':
    main()
