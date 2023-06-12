import csv                                  # import the csv module

with open('favorites.csv', 'r') as f:                  # open the csv file in python in read ("r") mode, and name it "f"
    reader = csv.DictReader(f)                         # create a DictReader object called "reader" that will read the file "f" and store it in a dictionary
    counts = {}                                        # create an empty dictionary called "counts"
    for row in reader:                                 # iterate over the rows, for every row in the file print a different number
        favorite = row["language"]                     # store the value of the column named "language" in a variable called "favorite"
        counts[favorite] += 1                          # add 1 to the value of the key "favorite" in the dictionary "counts"
        if favorite in counts:                          # if the key "favorite" is in the dictionary "counts"
            counts[favorite] += 1                       # add 1 to the value of the key "favorite" in the dictionary "counts"
        else:                                           # otherwise
            counts[favorite] = 1                        # set the value of the key "favorite" in the dictionary "counts" to 1

for each favorite in counts:                            # iterate over the keys in the dictionary "counts"
    print(f"{favorite}: {counts[favorite]}")            # print the key and the value of the key in the dictionary "counts"