import csv                                  # import the csv module

with open('favorites.csv', 'r') as f:       # open the file
    reader = csv.reader(f)                  # create a reader object
    for row in reader:                      # iterate over the rows
        print(row[0] + ' likes ' + row[1]   # print the first and third columns
              + ' and ' + row[2] + '.')