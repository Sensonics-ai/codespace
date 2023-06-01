import sys          # Import sys module

names = ["Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"]      # List of names

name = input  ("Name: ")        # Get name from user

if name in names:               # If name is in names
    print("Found")              # Print found
    sys.exit(0)                 # Exit program with success

else:
    print("Not found")              # Print not found
    sys.exit(1)                     # Exit program with failure

#this function will search for a name in a list of names and tell if it's there or not
