before = input("Before: ")      # get a string from the user
print ("After: ", end="")       # print "After: " with nothing
for c in before:                # for each character in the string
    print(c.upper(), end="")    # print the uppercase version of the character, end with nothing
print()                         # print () to go to next line in Python