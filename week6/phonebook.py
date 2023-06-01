import csv                                   # imports the csv module for its functionality

with file = open("phonebook.csv", "a")  as file:          # "with" statement opens the file and closes it when done

    name = input("Name: ")                       # gets the name from the user
    number = input("Number: ")                   # gets the number from the user

    writer = csv.writer(file)                    # creates a writer object

    writer.writerow([name, number])              # writes the name and number to the file

