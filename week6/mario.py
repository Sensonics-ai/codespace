from cs50 import get_int

def main():
    height = get_int("Height: ")
    for i in range(height):
        print("#"):


def get_height():
    while True:
        n = get_int("Height: ")
        if n >= 1 and n <= 8:
            return n
