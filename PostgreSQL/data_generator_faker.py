# USING FAKER LIB TO MAKE DATASET

"""
Creating a insert statements to polulate table with random dataset is a tedious process.
Using Python code snippet generating random data for the table using the Faker library will help.
You can adjust the number of records as needed.
"""

# First, make sure you have the Faker library installed. You can install it using pip:

"""pip install Faker"""


# Now by looking the schema make a python program to automatically generate data.

"""
create table time_slot (
    time_slot_id    varchar(5),
    day             varchar(10),
    start_time      varchar(5),
    end_time        varchar(5),
    primary key (time_slot_id, day, start_time)
);
"""

from faker import Faker

fake = Faker()

# Define the number of insert statements to generate
num_inserts = 100

# Specify the file name to save the insert statements
output_file = "insert_statements.sql"

# Open the file for writing
with open(output_file, "w") as file:
    # Generate and write the insert statements to the file
    for _ in range(num_inserts):
        time_slot_id = fake.unique.random_int(min=1, max=1000)
        day = fake.random_element(elements=('Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday'))
        start_time = fake.time(pattern='%H:%M')
        end_time = fake.time(pattern='%H:%M')
        
        # Create the insert statement
        insert_statement = f"INSERT INTO time_slot (time_slot_id, day, start_time, end_time) VALUES ('{time_slot_id}', '{day}', '{start_time}', '{end_time}');\n"
        
        # Write the insert statement to the file
        file.write(insert_statement)

print(f"{num_inserts} insert statements have been saved to {output_file}.")
