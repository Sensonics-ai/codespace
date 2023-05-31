

s = input("Do you agree? ")     # input() is a function that takes a string as an argument and returns a string as a result

if s in ["Y", "y", "Yes", "yes"]:   # if the user types in Y, y, Yes, or yes, then print Agreed
    print("Agreed.")

elif s in ["N", "n", "No", "no"]:   # if the user types in N, n, No, or no, then print Not agreed
    print("Not agreed.")