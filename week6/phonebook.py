import csv                                   # imports the csv module for its functionality

file = open("phonebook.csv", "a")            # opens the file in append mode

name = input("Name: ")                       # gets the name from the user
number = input("Number: ")                   # gets the number from the user

writer = csv.writer(file)                    # creates a writer object

writer.writerow([name, number])              # writes the name and number to the file

file.close()                                 # closes the file