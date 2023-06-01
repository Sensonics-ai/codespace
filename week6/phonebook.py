people = {  # Dictionary
    "John": "123-456-7890",         # Key: Value
    "Jane": "234-567-8901",
    "Jerome": "345-678-9012",
    "Jasmine": "456-789-0123",
    "Jared": "567-890-1234",
    "Jocelyn": "678-901-2345",
    "Carter:": "789-012-3456",

    #A dictionary is very similar to a list, or arrays in C, but instead of being limited to numbers, you can use words as the index

}

name = input("Name: ")              # Get name from user
if name in people:                 # If name is in people
    number = people[name]          # Get number from people
    print(f"Number: {number}")    # Print number

    #this function will store names and numbers in a dictionary and print the number if the name is found in the dictionary