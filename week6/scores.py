from cs50 import get_int             #importing a function from the cs50 library

scores = []                          #python will automatically know this is a list and grow it as needed
for i in range(3):                    #for loop
    score = get_int("Score: ")       #get_int is a function from the cs50 library
    scores.append(score)             #append is a function that adds to the end of the list

average = sum(scores) / len(scores)
print(f"Average: {average}")        #print the average

