#!/bin/bash

# Get the list of .c files in the current directory
c_files=$(ls *.c)

# Compile the .c files into object files
for file in $c_files; do
  gcc -c -Wall -Werror -fpic "$file"
done

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up the object files
rm *.o

echo "Dynamic library liball.so created successfully."
