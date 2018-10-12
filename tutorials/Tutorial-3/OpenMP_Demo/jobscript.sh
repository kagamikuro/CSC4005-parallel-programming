#!/bin/bash

# Execute job from current working directory
#$ -cwd

# Gives the name for output of execution
#$ -o programoutput.$JOB_ID

# Ask the scheduler for allocating 2 cores
#$ -pe smp-verbose 2

# Run more threads per core
export OMP_NUM_THREADS=2

# Prints date
date

# Compiling the Program
gcc -fopenmp helloworldomp.c -o helloworldomp

# Prints starting new job
echo "Starting new job"

# Executes the compiled program
./helloworldomp

# Prints finished job
echo "Finished job"

# Prints date
date
