

s = input("Do you agree? ")     # input() is a function that takes a string as an argument and returns a string as a result

if s == "Y" or s == "y":        # == is a comparison operator
    print("Agreed.")            # Indentation is important in python

elif s == "N" or s == "n":      # elif is short for else if, note how we can write or as or
    print("Not agreed.")        # elif is optional