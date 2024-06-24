import os
import pandas as pd
from gender_guesser.detector import Detector

# Directory to check
directory = 'C:/Users/anand/OneDrive/Desktop/DSA/'

# List all files in the directory
files = os.listdir(directory)
print("Files in the directory:", files)

# Check if the input file exists in the directory
if 'input_data.xlsx' in files:
    print("File 'input_data.xlsx' exists")
else:
    print("File 'input_data.xlsx' does not exist")
    # Exit the script if the file does not exist
    exit("The file 'input_data.xlsx' does not exist in the directory. Please check the file path.")

# Function to determine gender based on name
def determine_gender(name):
    print(f"Determining gender for name: {name}")
    detector = Detector()
    first_name = name.split()[0]  # Consider only the first name
    gender = detector.get_gender(first_name)
    print(f"Gender for {first_name}: {gender}")
    if gender in ['unknown', 'andy']:  # 'andy' is for ambiguous names
        return 'Unknown'
    else:
        return gender

# Function to process the Excel file
def process_excel(input_file, output_file):
    print("Reading Excel file")
    # Read Excel file
    df = pd.read_excel(input_file)
    print("Excel file read successfully")
    
    # Add a new column 'Gender' and determine gender based on 'Name' column
    print("Determining gender for each name in the 'Name' column")
    df['Gender'] = df['Name'].apply(determine_gender)
    
    # Write to a new Excel file with updated data
    print(f"Writing new Excel file to {output_file}")
    df.to_excel(output_file, index=False)
    print(f"New Excel file '{output_file}' created successfully.")

# Input and output file paths
input_file = os.path.join(directory, 'input_data.xlsx')
output_file = os.path.join(directory, 'output_data_with_gender.xlsx')

# Process the Excel file
process_excel(input_file, output_file)
