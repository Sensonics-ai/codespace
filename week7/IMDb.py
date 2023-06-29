from cs50 import SQL                                                          # Import SQL from cs50 library

db = SQL("sqlite:///IMDbActors.db")                                           # Create a database object

age = input("Age: ")                                                          # Ask the user for an age

rows = db.execute("SELECT * FROM name WHERE Birth Date = '1968-02-12'")       # Execute a SQL query and store the result in a variable called "rows"

row = rows [0]                                                          # Iterate over the rows in the result
    print(f"{row['name']} was born in {row['birth']}")                        # Print the name and birth year of each person in the result