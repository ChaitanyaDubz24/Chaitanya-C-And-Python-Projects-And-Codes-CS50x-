import pytest
from seasons import mins_alive



def test_mins_alive():
    assert mins_alive(2003, 5, 17) == "Eleven million, one hundred twenty-four thousand minutes"

def  test_mins_alive_wrong_input():
    assert mins_alive(23, 1, 2000) == "Invalid date"
