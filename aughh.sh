#!/bin/bash

# Display current stack size limit
echo "Current stack size limit:"
ulimit -s

# Increase stack size limit
echo "Increasing stack size limit..."
ulimit -s unlimited

# Display updated stack size limit
echo "Updated stack size limit:"
ulimit -s