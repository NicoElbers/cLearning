#!/bin/bash

# Check if an argument is provided
if [ $# -ne 1 ]; then
    echo "Usage: $0 <filename.c>"
    exit 1
fi

# Get the input filename from the command line argument
input_file="$1"

# Check if the input file exists
if [ ! -e "$input_file" ]; then
    echo "Error: File '$input_file' not found."
    exit 1
fi

# Check if the file ends with ".c"
if [[ ! "$input_file" =~ \.c$ ]]; then
    echo "Error: '$input_file' is not a C source file."
    exit 1
fi

# Extract the file name without the extension
output_name="${input_file%.c}"

# Compile the C file using gcc with debugging information
gcc -g -o "$output_name" "$input_file"

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful. Executable: $output_name"
    echo "Running file"
    echo ""
    ./"$output_name"
else
    echo "Compilation failed."
fi
