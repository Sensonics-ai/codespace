people = {  # Dictionary
    "John": "123-456-7890",         # Key: Value
    "Jane": "234-567-8901",
    "Jerome": "345-678-9012",
    "Jasmine": "456-789-0123",
    "Jared": "567-890-1234",
    "Jocelyn": "678-901-2345",
    "Carter:": "789-012-3456",

}

name = input("Name: ")              # Get name from user
if name in people:                 # If name is in people
    print(f"Number: {people[name]}")    # Print number, note the f string and