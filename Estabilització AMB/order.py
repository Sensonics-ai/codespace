import csv

# Function to read CSV and return the ordered list
def get_ordered_list_from_csv(/workspaces/codespace/Estab.csv):
    ordered_list = []
    with open(/workspaces/codespace/Estab.csv, 'r', newline='') as csvfile:
        csv_reader = csv.DictReader(csvfile)
        sorted_rows = sorted(csv_reader, key=lambda row: float(row['Score']), reverse=True)

        for row in sorted_rows:
            ordered_list.append(row)

    return ordered_list

# Replace 'Estab.csv' with the actual name of your CSV file
/workspaces/codespace/Estab.csv = 'Estab.csv'

# Get the ordered list from the CSV
ordered_list = get_ordered_list_from_csv(/workspaces/codespace/Estab.csv)

# Print the ordered list
for row in ordered_list:
    print(f"{row['Surname']}, {row['Name']}, {row['Score']}")
