import csv                                                          # import the csv module

with open('favorites.csv', 'r', encoding='utf-8') as f:             # open the csv file in python in read ("r") mode, and name it "f"
    reader = csv.reader(f)                                          # create a reader object called "reader" that will read the file "f"
    for row in reader:                                              # iterate over the rows, for every row in the file print a different number
        print(row[2])                                               # print the value of the third column in the row
        
