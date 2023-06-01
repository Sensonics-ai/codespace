from cs50 import get_int

def main():                             # main function definition
    height = get_int("Height: ")        # get height from user
    for i in range(height):             # for loop
        print("#")                      # print hashes


def get_height():                       # function definition
    while True:                         # while loop
        n = int(input("Height: "))       # get height from user
        if n >= 1 and n <= 8:           # check if height is between 1 and 8
            return n                    # return height

main()                              # function call
