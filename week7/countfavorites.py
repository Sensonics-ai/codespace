import csv                                  # import the csv module

with open('favorites.csv', 'r') as f:           # open the csv file in python in read ("r") mode, and name it "f"
    reader = csv.DictReader(f)                  # create a DictReader object called "reader" that will read the file "f" and store it in a dictionary
    scratch, c, python = 0, 0, 0                # create three variables, one for each language, and set them all to 0
    for row in reader:                          # iterate over the rows, for every row in the file print a different number
        favorite = row["language"]              # store the value of the column named "language" in a variable called "favorite"
        if favorite == "Scratch":               # if the value of the variable "favorite" is "Scratch"
            scratch += 1                        # add 1 to the variable "scratch"
        elif favorite == "C":                   # if the value of the variable "favorite" is "C"
            c += 1                              # add 1 to the variable "c"
        elif favorite == "Python":              # if the value of the variable "favorite" is "Python"
            python += 1                         # add 1 to the variable "python"
