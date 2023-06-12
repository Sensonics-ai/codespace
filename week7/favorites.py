import csv                                  # import the csv module

with open('favorites.csv', 'r') as f:       # open the csv file in python in read ("r") mode, and name it "f"
    reader = csv.reader(f)                  # load this file into the csv reader object (object is one of the packages in python)
    for row in reader:                      # iterate over the rows, for every row in the file print a different number
        print(row[1])                       # print the second column of every row (the first column is row[0], the second is row[1], the 3rd is row[2], etc.)
