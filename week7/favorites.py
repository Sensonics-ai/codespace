import csv                                  # import the csv module

with open('favorites.csv', 'r') as f:       # open the csv file in python in read ("r") mode, and name it "f"
    reader = csv.reader(f)                  # load this file into the csv reader object (object is one of the packages in python)
    for row in reader:                      # iterate over the rows, for every row in the file print a different number
        favorite = row[1]                   # store the second column of every row in a variable called "favorite", which is the name of that column in the csv file
        print(favorite)                       # print the column named "favorite" of every row, which we know is column 2