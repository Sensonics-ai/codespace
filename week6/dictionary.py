words = set()                       # create empty set for words


def check(word):                    # check if word is in dictionary
    if word.lower() in words:       # convert word to lowercase
        return True                 # if word is in dictionary, return True
    else:                           # else return False
        return False

def load(dictionary):               # load dictionary into memory
    file = open(dictionary, "r")    # open dictionary file
    for line in file:               # read each line in file
        words.add(line.rstrip("\n"))    # add word to set
    file.close()                    # close file
    return True                     # return True if successful

def size():                         # return number of words in dictionary
    return len(words)               # return length of set


def unload():                       # unload dictionary from memory
    return True                     # return True if successful
