# sample_code.py

import math

def calculate_area(radius):
    # TODO: Handle negative radius case
    pi = 3.14159  # Should use math.pi instead
    unused_variable = 42
    return pi * radius * radius

def process_data(data):
    total = 0
    for value in data:
        total += value
    # duplicate logic
    total2 = 0
    for value in data:
        total2 += value
    print("Processing complete!")
    return total

def very_long_function():
    # This function is unnecessarily long
    for i in range(50):
        print("Line", i)
    print("Done!")

if __name__ == "__main__":
    print("Area:", calculate_area(5))
    result = process_data([1, 2, 3])
    very_long_function()
