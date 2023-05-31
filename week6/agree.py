

s = input("Do you agree? ")     # input() is a function that takes a string as an argument and returns a string as a result

s = s.lower()
if s in ["y", "yes"]:   # s.lower() is a method that returns a string in lowercase
    print("Agreed.")

elif s in ["n", "no"]:  # s.lower() can be used in python to convert a string to lowercase
    print("Not agreed.")