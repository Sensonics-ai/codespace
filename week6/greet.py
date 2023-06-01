from sys import argv        # Import argv from sys module

if len(argv) == 2:          # If there are 2 command-line arguments (the first is the program name)
    print(f"Hello, {argv[1]}")  # Print the second argument
else:                       # Otherwise
    print("Hello, world")    # Print "Hello, world"

 #this function will print the second command line argument, and if there is none, it will print "Hello, world"